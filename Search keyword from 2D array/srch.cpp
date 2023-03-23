#include <iostream>
#include <string.h>
using namespace std; 

int main()
{ 
    int chk;
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