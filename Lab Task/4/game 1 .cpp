#include <iostream>
#include <time.h>
using namespace std;

int main()
{
int op;
int x;
int y;
int ans;
int total;
int point;
int play;


srand(time(0));
x = rand() % 100;
y = rand() % 100 + 1;
point;


{
cout << "----- Game of Code -------" << endl<<endl;
cout<<"The game contents addition, subtraction, multiplication, division and so on."<<endl<<endl;
cout << "Press 1 to start the game" << endl;
cout << "Press 0 to leave" << endl<<endl;
cout << "--- Enter your option: ";
cin >> op;


switch (op)
{
case 1:
cout <<"What is "<< x <<"+" << y <<"?"<<endl<<"Ans: ";
cin >>ans;
total=x+y;

if (ans == x + y) {
cout << "Correct answer, plus point" << endl;
{
point=0;
    if (ans==total)
        point=++point;
        else
        point=point;
}
}
else {
cout << "Wrong answer, minus point" << endl;
}
case 2:
cout <<"What is "<< x <<"-" << y <<"?"<<endl<<"Ans: ";
cin >>ans;
total=x-y;

if (ans == x - y) {
cout << "Correct answer, plus point" << endl;
 {if (ans==total)
        point=++point;
        else
        point=point;

}
}
else {
cout << "Wrong answer, minus point" << endl;
point=-1;
}
case 3:
cout <<"What is "<< x <<"*" << y <<"?"<<endl<<"Ans: ";
cin >>ans;
total=x*y;

if (ans == x * y) {
cout << "Correct answer, plus point" << endl;
{if (ans==total)
        point=++point;
        else
        point=point;

}
}
else {
cout << "Wrong answer, minus point" << endl;
}
case 4:
cout <<"What is "<< x <<"/" << y <<"?"<<endl<<"Ans: ";
cin >>ans;
total=x/y;

if (ans == x / y) {
cout << "Correct answer, plus point" << endl;
{if (ans==total)
        point=++point;
        else
        point=point;

}
}
else {
cout << "Wrong answer, minus point" << endl;
}
cout << "You scored: " << point << " of 4!" << endl<<endl;

cout<<"to play again press 1, to leave press 0 :"<<endl;
cin>>play;
{ if (play == 1)

{
cout << "Select game which you want to play" << endl<<endl;
cout << "1: Game of Plus" << endl;
cout << "2: Game of Minus " << endl;
cout << "3: Game of Multiply" << endl;
cout << "4: Game of Divide" << endl;
cout << "0: I don't want to play this game" << endl<<endl;
cout << "--- Enter your option: ";
cin >> op;

switch (op)
{
case 1:
cout <<"What is "<< x <<"+" << y <<"?"<<endl<<"Ans: ";
cin >>ans;
total=x+y;

if (ans == x + y) {
cout << "Correct answer, plus point" << endl;
{
    if (ans==total)
        point=++point;
        else
        point=point;
}
}
else {
cout << "Wrong answer, minus point" << endl;
}
case 2:
cout <<"What is "<< x <<"-" << y <<"?"<<endl<<"Ans: ";
cin >>ans;
total=x-y;

if (ans == x - y) {
cout << "Correct answer, plus point" << endl;
 {if (ans==total)
        point=++point;
        else
        point=point;

}
}
else {
cout << "Wrong answer, minus point" << endl;
point=-1;
}
case 3:
cout <<"What is "<< x <<"*" << y <<"?"<<endl<<"Ans: ";
cin >>ans;
total=x*y;

if (ans == x * y) {
cout << "Correct answer, plus point" << endl;
{if (ans==total)
        point=++point;
        else
        point=point;

}
}
else {
cout << "Wrong answer, minus point" << endl;
}
case 4:
cout <<"What is "<< x <<"/" << y <<"?"<<endl<<"Ans: ";
cin >>ans;
total=x/y;

if (ans == x / y) {
cout << "Correct answer, plus point" << endl;
{if (ans==total)
        point=++point;
        else
        point=point;

}
}
else {
cout << "Wrong answer, minus point" << endl;
}
cout << "You scored: " << point << " of 8!" << endl<<endl;
cout<<"Game over."<<endl<<endl;
}
return 1;

default:
cout << "Thank you, have a nice day" << endl;
}
else
    cout<<"Game Over";
}

return 0;
}} }
