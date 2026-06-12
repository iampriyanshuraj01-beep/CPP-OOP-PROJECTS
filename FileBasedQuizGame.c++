#include <iostream>
#include <fstream>
using namespace std;

// Base Class
class Quiz {
protected:
    string question;
    string answer;

public:
    Quiz(string q, string a) {
        question = q;
        answer = a;
    }

    virtual void askQuestion() {
        cout << question << endl;
    }

    bool checkAnswer(string userAns) {
        return userAns == answer;
    }
};

// Derived Class
class MCQ : public Quiz {
public:
    MCQ(string q, string a) : Quiz(q, a) {}

    void askQuestion() override {
        cout << "\n" << question << endl;
    }
};

int main() {
    string name, userAns;
    int score = 0;

    cout << "Enter Player Name: ";
    getline(cin, name);

    MCQ q1("1. What is the capital of India?\nA) Delhi\nB) Mumbai\nC) Kolkata\nD) Chennai", "A");
    MCQ q2("2. Which language is used for OOP?\nA) HTML\nB) CSS\nC) C++\nD) SQL", "C");
    MCQ q3("3. Who developed C++?\nA) Dennis Ritchie\nB) Bjarne Stroustrup\nC) James Gosling\nD) Guido van Rossum", "B");

    Quiz* questions[] = {&q1, &q2, &q3};

    for (int i = 0; i < 3; i++) {
        questions[i]->askQuestion();  // Polymorphism
        cout << "Your Answer: ";
        cin >> userAns;

        if (questions[i]->checkAnswer(userAns))
            score++;
    }

    cout << "\nFinal Score: " << score << "/3" << endl;

    // File Handling
    ofstream file("scores.txt", ios::app);
    file << "Player: " << name << " | Score: " << score << "/3" << endl;
    file.close();

    cout << "Score saved to scores.txt file." << endl;

    return 0;
}