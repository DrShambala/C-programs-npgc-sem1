#include <iostream>
#include <stdio.h>
#include <string>
// #include <conio.h>
using namespace std;

class Student {
private:
    long int UID;
    char name[20];
    char captcha[10];

public:
    void inputDetails() {
        cout << "Enter Your Name: ";
        gets(name);
        cout << "Enter your Unique ID: ";
        cin >> UID;
        cout << "Enter captcha\n--------\n|C72gaD|\n--------\n";
        gets(captcha);
    }

    void displayMarks() {
        if (captcha == "C72gaD") {
            system("cls");
            cout << "Name : " << name << "\n";
            cout << "UID : " << UID << "\n";
            cout << "Subject\t\t\tMarks" << "\n";
            if (UID == 7469577) {
                cout << "English\t\t\t70" << "\n";
                cout << "Hindi\t\t\t90" << "\n";
                cout << "Physics\t\t\t55" << "\n";
                cout << "Chemistry\t\t69" << "\n";
                cout << "Biology\t\t\t68" << "\n";
                cout << "Computer Science\t70" << "\n";
            } else if (UID == 7469576) {
                cout << "English\t\t\t73" << "\n";
                cout << "Hindi\t\t\t70" << "\n";
                cout << "Physics\t\t\t81" << "\n";
                cout << "Chemistry\t\t83" << "\n";
                cout << "Biology\t\t\t73" << "\n";
                cout << "Computer Science\t52" << "\n";
            } else if (UID == 7469578 || UID == 7469575) {
                cout << "English\t\t\t53" << "\n";
                cout << "Hindi\t\t\t60" << "\n";
                cout << "Physics\t\t\t71" << "\n";
                cout << "Chemistry\t\t77" << "\n";
                cout << "Biology\t\t\t83" << "\n";
                cout << "Computer Science\t72" << "\n";
            } else {
                cout << "Invalid UID!" << "\n";
            }
        } else {
            cout << "Invalid Input!" << "\n";
        }
    }
};

int main() {
    Student s;
    s.inputDetails();
    s.displayMarks();
    getch();
    return 0;
}
