#include <iostream>

int main()

{

int array[50], size, i, largest;

cout <<"\n Enter the size of the array: ";

cin>>"%d", &size;

cout <<"\n Enter %d elements of the array: ", size;

for (i = 0; i < size; i++)

cin>>"%d", &array[i];

largest = array[0];

for (i = 1; i < size; i++)

{

if (largest < array[i])

largest = array[i];

}

cout <<"\n largest element present in the given array is : %d", largest;

return 0;

}
