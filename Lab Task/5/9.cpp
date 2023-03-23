#include <iostream>
using namespace std;
int main()
{
    string user[3] ={"akash","avro","alen"};
    string pass[3] ={"123","567","891"};
    string *p;
    string s,a,f,e;
    cout << "Username: ";
    cin >> s;
    for(int i=0; i<4; i++){
        if(user[i]==s){
            cout << "Password : ";
            cin >> a;
            if(pass[i]!=a)
                {
                cout << "wrong password";
                break;
            }
            else if(pass[i]==a)
                {
                cout << "Do you want to change password?(yes/no)" << endl;
                cin >> e;
                if((e=="yes") || (e=="Yes") || (e=="y") || (e=="Y"))
            {
                cout << " Input new password : ";
                cin >> f;
                p = &f;
                pass[i] = *p;
                cout << "Password changed." << endl;
                break;
                }

            }
        }
        else if(i==3){
             cout << "wrong username!";
        }
    }
    }
