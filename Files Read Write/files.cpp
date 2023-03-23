#include <iostream>
#include <fstream>   //library to handle file
using namespace std;

int main()
{
    ofstream createFile("txtFile.txt");  //creating file ; myFile = object reference of the file
    char data[100];              // can input char type data type
    createFile.close();             // this will close the file ; no input will be written on the file

    ofstream writeFile;
    writeFile.open("txtFile.txt");   // open a file in write mode.
    
    cout<<"Write something you want to store in file: "<<endl<<endl;
    cout<<"\tWrite your name: ";   
    cin.getline(data, 100);
    writeFile <<data << endl;      // write inputted data into the file.

     cout << "\tEnter your age: "; 
     cin >> data;
     cin.ignore();
     writeFile << data << endl;     // again write inputted data into the file.
    writeFile.close();  
 

    ifstream readFile; 
    readFile.open("txtFile.txt");       // open a file in read mode.
    cout << "\n\tReading from the file" << endl<<endl; 
    readFile >> data;
    cout <<"\t\tHello "<< data << endl;        // write the data at the screen.

    readFile >> data;       // again read the data from the file and display it. (for 2nd input)
    cout <<"\t\tYou are "<<data<< " years old."<< endl; 
    readFile.close();   // close the opened file.
}