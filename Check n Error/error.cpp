#include <iostream>
#include <fstream>   
#include <string>
using namespace std;

int main()
{
    string data;   //statement
    ofstream createFile("txtFile.txt");  //creating file ; myFile = object reference of the file
    createFile.close();             // this will close the file ; no input will be written on the file
    ofstream writeFile;
    writeFile.open("txtFile.txt");   // open a file in write mode.
    cout<<"Enter an expression: ";
    getline(cin, data);    
    writeFile <<data;      // write inputted data into the file.
    writeFile.close();
     cout<<endl<<endl;
    ifstream readFile; 
    readFile.open("txtFile.txt");       // open a file in read mode.
    string checker;
    string T;
    while (getline (readFile, checker))       // Writting data from file into new string
    {T = checker;}
    int x =T.length()-1;
     if(T.back()==';' && T[x]==')')
    cout<< T<<"\t Statement has ; in ending and ) is true"<<endl; 

    else
    cout<<"\t Statement has error"<<endl;
       
}