#include <iostream>
using namespace std;

// Base Class
class Employee {
protected:
    int empId;
    string name;

public:
    Employee(int id, string n) {
        empId = id;
        name = n;
    }

    virtual void calculateSalary() = 0; // Pure Virtual Function
};

// Derived Class for Full-Time Employee
class FullTimeEmployee : public Employee {
    double monthlySalary;

public:
    FullTimeEmployee(int id, string n, double salary)
        : Employee(id, n) {
        monthlySalary = salary;
    }

    void calculateSalary() {
        cout << "\nEmployee ID: " << empId;
        cout << "\nName: " << name;
        cout << "\nEmployee Type: Full-Time";
        cout << "\nSalary: Rs. " << monthlySalary << endl;
    }
};

// Derived Class for Part-Time Employee
class PartTimeEmployee : public Employee {
    int hoursWorked;
    double ratePerHour;

public:
    PartTimeEmployee(int id, string n, int hours, double rate)
        : Employee(id, n) {
        hoursWorked = hours;
        ratePerHour = rate;
    }

    void calculateSalary() {
        double salary = hoursWorked * ratePerHour;

        cout << "\nEmployee ID: " << empId;
        cout << "\nName: " << name;
        cout << "\nEmployee Type: Part-Time";
        cout << "\nHours Worked: " << hoursWorked;
        cout << "\nSalary: Rs. " << salary << endl;
    }
};

int main() {
    int choice, id, hours;
    string name;
    double salary, rate;

    cout << "Employee Payroll System";
    cout << "\n1. Full-Time Employee";
    cout << "\n2. Part-Time Employee";
    cout << "\nEnter Choice: ";
    cin >> choice;

    cout << "Enter Employee ID: ";
    cin >> id;

    cin.ignore();
    cout << "Enter Employee Name: ";
    getline(cin, name);

    Employee *emp;

    if (choice == 1) {
        cout << "Enter Monthly Salary: ";
        cin >> salary;

        emp = new FullTimeEmployee(id, name, salary);
    }
    else if (choice == 2) {
        cout << "Enter Hours Worked: ";
        cin >> hours;

        cout << "Enter Rate Per Hour: ";
        cin >> rate;

        emp = new PartTimeEmployee(id, name, hours, rate);
    }
    else {
        cout << "Invalid Choice!";
        return 0;
    }

    emp->calculateSalary();

    delete emp;
    return 0;
}