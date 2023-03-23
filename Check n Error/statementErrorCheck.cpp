#include <iostream>
#include <fstream>   
#include <string>
using namespace std;

int main()
{
     bool flag1 = false;
     bool flag2 = false;
     bool flagSemi = false;
     char data[100];
  
    ofstream createFile("txtFile.txt");  //creating file ; myFile = object reference of the file
    createFile.close();             // this will close the file ; no input will be written on the file
    ofstream writeFile;
    writeFile.open("txtFile.txt");   // open a file in write mode.
    cout<<"Enter an Statement: ";
    cin.getline(data, 100);   
    writeFile <<data;      // write inputted data into the file.
    writeFile.close();
     cout<<endl<<endl;
    ifstream readFile; 
    readFile.open("txtFile.txt");       // open a file in read mode.
    string Text;
      while (getline (readFile, Text)) {
    for(int i=0; i<Text.length(); i++){
        if((Text[i]=='(')){
        flag1 = true;
        }
        else if((Text[i]==')')){
        flag2 = true;
        }
        if(Text[Text.length()-1]==';'){
            flagSemi = true;
        }
    }
  }
    readFile.close();

  if(flag1 && flag2 && flagSemi)
      cout << "Statement is valid."<<endl;
  else if(!flag1 && flag2 && flagSemi)
      cout << "Statement is invalid. '(' is missing.";  
  else if(flag1 && !flag2 && flagSemi)
      cout << "Statement is invalid. ')' is missing.";  
  else if(flag1 && flag2 && !flagSemi)
      cout << "Syntax Error. (;) missing";  
  else if(!flag1 && flag2 && !flagSemi)
      cout << "Statement is invalid. '(' missing. (;) expected";  
   else if(flag1 && !flag2 && !flagSemi)
      cout << "Statement is invalid. ')' missing. (;) expected";
   else if(!flag1 && !flag2 && flagSemi)
   cout<<"Statement is valid.";
   else if(!flag1 && !flag2 && !flagSemi)
      cout << "Syntax Error. (;) missing";
    else 
    cout<<"Invalid Statement"<<endl;       
}