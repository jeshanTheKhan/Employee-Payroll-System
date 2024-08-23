#include <bits/stdc++.h>

using namespace std;

class Employee
{
private:
    string name;
    int id;
    double hourlyRate;
    int hourlyWork;
    int workDays;
    double salary;
    double bonus;
    string position;

public:
    void getInput()
    {
        cout << "Enter employee name: ";
        getline(cin, name);

        cout << "Enter employee ID: ";
        cin >> id;

        cout << "Enter hourly rate: ";
        cin >> hourlyRate;

        cout << "Enter hours worked per day: ";
        cin >> hourlyWork;

        cout << "Enter number of work days: ";
        cin >> workDays;

        cout << "Enter bonus percentage: ";
        cin >> bonus;

        cout << "Enter employee position: ";
        cin.ignore(); // to consume the newline character left in the buffer
        getline(cin, position);
    }

    void calculateSalary()
    {
        salary = hourlyRate * hourlyWork * workDays;
        double bonusAmount = (bonus / 100) * salary;
        salary += bonusAmount;
    }

    void displayDetails()
    {
        cout << "\nEmployee Details:\n";
        cout << setfill('-') << setw(40) << "\n"
             << setfill(' ');

        cout << setw(20) << "Name:" << setw(20) << name << endl;
        cout << setw(20) << "ID:" << setw(20) << id << endl;
        cout << setw(20) << "Position:" << setw(20) << position << endl;
        cout << setw(20) << "Hourly Rate:" << setw(20) << "$" << hourlyRate << endl;
        cout << setw(20) << "Hourly Work:" << setw(20) << hourlyWork << " hours/day" << endl;
        cout << setw(20) << "Work Days:" << setw(20) << workDays << " days" << endl;
        cout << setw(20) << "Base Salary:" << setw(20) << "$" << (salary - bonus) << endl;
        cout << setw(20) << "Bonus Percentage:" << setw(20) << bonus << "%" << endl;
        cout << setw(20) << "Bonus Amount:" << setw(20) << "$" << (bonus / 100) * salary << endl;
        cout << setw(20) << "Total Salary:" << setw(20) << "$" << salary << endl;

        cout << setfill('-') << setw(40) << "\n"
             << setfill(' ');
    }
};

int main()
{
    Employee emp;

    emp.getInput();
    emp.calculateSalary();
    emp.displayDetails();

    return 0;
}
