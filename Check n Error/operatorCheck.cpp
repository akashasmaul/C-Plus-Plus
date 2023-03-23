#include <iostream>
#include <fstream>   //library to handle file
#include <string>   
using namespace std;

int main() {
    ofstream createFile("txtFile.txt");  //creating file ; myFile = object reference of the file
    char exp[100];              // can input char type data type
    createFile.close();             // this will close the file ; no input will be written on the file

    ofstream writeFile;
    writeFile.open("txtFile.txt");   // open a file in write mode.
    
    cout<<"Write an expression: ";  
    cin.getline (exp, 100);
    writeFile <<exp << endl;      // write inputted data into the file.

   ifstream readFile;
   readFile.open("txtFile.txt");        // open a file in read mode.
   cout<<"\n\tOperators found in the Expression: ";
  string checker;
  while (getline (readFile, checker))       // Writting data from file into new string
   { 
    for(int i=0; i<checker.length(); i++)
    {
     if((checker[i]=='+') || (checker[i]=='-') || (checker[i]=='*') || (checker[i]=='/'))
        {
            cout << checker[i] << " ";
        }  
    }   
    readFile.close();  
  }
}
