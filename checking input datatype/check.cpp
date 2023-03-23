#include <iostream>
using namespace std;

bool isNumber(string s)
{
	for (int i = 0; i < s.length(); i++)    
		if (isdigit(s[i]) == true)       
			return true;
	return false;
		
}
int main()
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
