#include <iostream>
using namespace std;
class test
{ private:
    int x, y, z;
public:
    void setter (int a, int b, int c)
    {
        x=a;
        y=b;
        z=c;
    }
void show()
{
    cout << "X: " << x << endl<<"Y: "<<y<<endl<<"Z: "<<z<<endl;
}
};
int main()
{
    test ob;
    ob.setter(11,22,33);
    ob.show();
}
