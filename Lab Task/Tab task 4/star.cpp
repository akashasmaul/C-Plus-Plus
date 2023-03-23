#include <iostream>
using namespace std;

int main() {

   int m=1;
   for (int i = 1; i <= 10; i++) {
      for (int j = 1; j <= m; j++) {
         cout << "*";
      }
      m++;
      cout << endl;
   }

}
