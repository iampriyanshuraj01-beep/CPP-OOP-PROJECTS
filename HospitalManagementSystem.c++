#include <iostream>
#include <string>
using namespace std;

class Patient
{
public:
    int id, age;
    string name, disease;
};

Patient p[100];
int countPatient = 0;

void addPatient()
{
    cout << "\nEnter Patient ID: ";
    cin >> p[countPatient].id;

    cin.ignore();
    cout << "Enter Patient Name: ";
    getline(cin, p[countPatient].name);

    cout << "Enter Age: ";
    cin >> p[countPatient].age;

    cin.ignore();
    cout << "Enter Disease: ";
    getline(cin, p[countPatient].disease);

    countPatient++;

    cout << "\nPatient Record Added Successfully!\n";
}

void displayPatients()
{
    if(countPatient == 0)
    {
        cout << "\nNo Patient Records Found!\n";
        return;
    }

    cout << "\n----- Patient Records -----\n";

    for(int i = 0; i < countPatient; i++)
    {
        cout << "\nPatient ID: " << p[i].id;
        cout << "\nName: " << p[i].name;
        cout << "\nAge: " << p[i].age;
        cout << "\nDisease: " << p[i].disease;
        cout << "\n------------------------";
    }
}

void searchPatient()
{
    int id;
    cout << "\nEnter Patient ID to Search: ";
    cin >> id;

    for(int i = 0; i < countPatient; i++)
    {
        if(p[i].id == id)
        {
            cout << "\nPatient Found!";
            cout << "\nName: " << p[i].name;
            cout << "\nAge: " << p[i].age;
            cout << "\nDisease: " << p[i].disease;
            return;
        }
    }

    cout << "\nPatient Not Found!";
}

void deletePatient()
{
    int id;
    cout << "\nEnter Patient ID to Delete: ";
    cin >> id;

    for(int i = 0; i < countPatient; i++)
    {
        if(p[i].id == id)
        {
            for(int j = i; j < countPatient - 1; j++)
            {
                p[j] = p[j + 1];
            }

            countPatient--;
            cout << "\nPatient Record Deleted Successfully!";
            return;
        }
    }

    cout << "\nPatient Not Found!";
}

int main()
{
    int choice;

    do
    {
        cout << "\n\n===== Hospital Management System =====";
        cout << "\n1. Add Patient";
        cout << "\n2. Display Patients";
        cout << "\n3. Search Patient";
        cout << "\n4. Delete Patient";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addPatient();
                break;

            case 2:
                displayPatients();
                break;

            case 3:
                searchPatient();
                break;

            case 4:
                deletePatient();
                break;

            case 5:
                cout << "\nThank You!";
                break;

            default:
                cout << "\nInvalid Choice!";
        }

    } while(choice != 5);

    return 0;
}