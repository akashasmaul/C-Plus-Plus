#include <iostream>
using namespace std;
int x;
float y;
int A;
void aiub(int a, float b)
{
A=a;
y=b;
}
int aks()
{
return A;
}
float avro()
{
return y;
}
int main()
{
aiub(356456,5.3);
cout<<aks()<<endl;
cout<<avro()<<endl;
}
