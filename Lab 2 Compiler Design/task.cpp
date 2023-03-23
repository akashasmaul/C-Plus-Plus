#include <iostream>
#include <string.h> 
#include <fstream>   //library to handle file 
using namespace std;  
#define max 100

void task1() //program for splitting a string by a ‘-‘ (hyphen).
{
    char str[] = "Hello-there";
    
    char* token = strtok(str, "-");
   
    while (token != NULL) {      
        cout<<token<<"\n";
        token = strtok(NULL, "-"); }
}

void task2()  //program for splitting a string by a ‘ ‘ (space).
{
    char str[] = "Hello there. How are you?";
    char* token;
    char* rest = str;

    while ((token = strtok_r(rest, " ", &rest)))
    cout<<"\n"<<token;       
}
void task3()  //program to detect keyword or not keyword
{
    int chk=0;
    char usergetline[20]; 
       
	char keyword[32][100] = { "auto", "break","char", "const", "continue","default","do","double","else","enum",
                                "extern","folat", "for", "goto", "if", "int", "long",
                            "registar", "return", "short", "signed", "sizeof", "static", "struct",
                            "switch", "typedef", "union", "unsigned", "void", "volatile", "while"  };

     cout << "\n\n\tKeywords stored in the array: "<<endl;
	for (int i = 0; i < 32; i++)
		cout << keyword[i] << " ";
    cout<<endl<<endl;    

  cout << "Enter the keyword you want to check: ";
    cin >> usergetline;  
    cout<<endl<<endl;  
    
for (int i = 0; i < 32; i++) {
        
        if (strcmp(usergetline, keyword[i]) == 0)
            chk = 1;
    }

    if (chk != 0 )
    {
        cout << usergetline <<" Keyword is found"<<endl;
    }
    else
    {
        cout << usergetline  << " Keyword is not found"<<endl;
    }      
}

//task 4  // program to find if the given input string is a valid identifier
bool isValid(string str, int n)
{
	// If first character is invalid
	if (!((str[0] >= 'a' && str[0] <= 'z')
		|| (str[0] >= 'A' && str[0] <= 'Z')
		|| str[0] == '_'))
		return false;
	// Traverse the string for the rest of the characters
	for (int i = 1; i < str.length(); i++) {
		if (!((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9')
			|| str[i] == '_'))
			return false;
	}
	return true;
}
void task4 () 
{
    string str = "Accept_Friend_Request";
	int n = str.length();

	if (isValid(str, n))
		cout << "Valid";
	else
		cout << "Invalid";
}

// task 5  //program to find whether the Given Input is Numeric Constant or Not.
bool isNumber(string s)
{
	for (int i = 0; i < s.length(); i++)    
		if (isdigit(s[i]) == true)       
			return true;
	return false;		
}
void task5 ()
{
    string n;
  	cout<<"Input a keyword: "; 
    cin >> n;
    cout<<endl<<"You typed: "<<n<<endl;

	if (isNumber(n))
	cout <<n<<" is Numeric"<<endl;	
	else		
		cout <<n<<" is Character"<<endl;
}
void task7 ()  //program to determine whether the Given Input is Comment or Not.
{
    int a,b;
    char arr[max];

    char str[2];
    cout<<"Enter something: ";    
    cin.getline (arr, max);
    int l = strlen(arr); 
    

    strncpy(str,arr,2);
    if ((a=strncmp(str,"//",2))  || ((b=strncmp(str,"/*",2))&& arr[l-2]=='*' && arr[l-1]=='/'))
        cout<<"is a Comment\n";
    else
        cout<<"It is not a Comment\n";
}
void task6 ()  //program to find the Operators from the Given Input
{
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
int main()
{
  //  task1();
  //  task2();
  //  task3();
  //  task4(); //maybe dosen't work
  //  task5();
  //  task7();
    task6();  //self impressed xD 
}