#include<iostream>

 using namespace std;

 int main() {

     //Declare variables
     int correct;
     int input;

     //Game Logic
     cout << "Welcome to my game!" << endl;
     cout << "Press 2 to continue" << endl;
     cin >> input;
     cin.ignore();
     if (input == 2) {
         input = 0;
         cout << "What is 75 + 240?" << endl;
         cin >> input;
         cin.ignore();
         if (input == 75 + 240) {
             cout << "Correct!" << endl;
             correct = 1;
         } else {
             cout << "Incorrect!" << endl;
         }
         input = 0;
         cout << "What is 50 + 73?" << endl;
         cin >> input;
         cin.ignore();
         if (input == 50 + 73) {
             cout << "Correct!" << endl;
             if (correct == 1) {
                 correct = 2;
             } else {
                 correct = 1;
             }
         } else {
             cout << "Incorrect!" << endl;
         }
         cout << "You scored: " << correct << " of 2!" << endl;
         cout << "Thanks for playing!" << endl;
     } else {
     }
 }
