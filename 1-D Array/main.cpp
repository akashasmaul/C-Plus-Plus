#include<iostream>
using namespace std;

//Asmaul Hossain Akash
//20-44209-3

//task1
/*

void mergeArrays(int arr1[], int arr2[], int n1,
                             int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;


    while (i<n1 && j <n2)
    {

        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }


    while (i < n1)
        arr3[k++] = arr1[i++];


    while (j < n2)
        arr3[k++] = arr2[j++];
}


int main()
{
    int arr1[] = {10,20,30,40,50};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {1,2,3,4,5,6,7,8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[n1+n2];
    mergeArrays(arr1, arr2, n1, n2, arr3);

    cout << "Array after merging" <<endl;
    for (int i=0; i < n1+n2; i++)
        cout << arr3[i] << " ";
        cout<<endl;
    cout << "Array after Reverse: " <<endl;
    for (int i=n2+n1-1; i>=0 ; i--)
        cout << arr3[i] << " ";
    return 0;
} */
/*
//task2
void common(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3)
{

    int i = 0, j = 0, k = 0;


    while (i < n1 && j < n2 && k < n3)
    {

         if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
         {   cout << arr1[i] << " ";   i++; j++; k++; }


         else if (arr1[i] < arr2[j])
             i++;


         else if (arr2[j] < arr3[k])
             j++;


         else if (arr1[i] > arr3[k])
             k++;
         else
            cout<< " No common element! ";
    }
}


int main()
{
    int arr1[] = {2, 4, 15, 60, 40,70};
    int arr2[] = {26, 70, 25, 89, 10};
    int arr3[] = {34, 43, 15, 20, 30,70, 82, 20};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int n3 = sizeof(arr3)/sizeof(arr3[0]);

    cout << "Common Elements are ";
    common(arr1, arr2, arr3, n1, n2, n3);
    return 0;
}
*/
/*
//task3
int main()
{
    int i,j;

    int arr[10]= {1,23,23,65,34,22,65,54,67};
  cout<<"Elements of in Array : ";

  for(i=0;i<10;i++)
  {
  cout<<" "<<arr[i]<<" ";
  }
    cout<<endl;
  cout<<"Duplicate Elements in Array are : ";
  for(i=0; i<10; i++)
   {
    for(j=i+1;j<10;j++)
    {
    if(arr[i]==arr[j])
    {
    cout<<" "<<arr[i]<<" ";
    }
   }
   }

  return 0;
 }
*/
/*
//task4
int main()
{
    int arr[100], freq[100];
    int size, i, j, count;


    printf("Enter size of array: ");
    scanf("%d", &size);


    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);

        freq[i] = -1;
    }


    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {

            if(arr[i]==arr[j])
            {
                count++;


                freq[j] = 0;
            }
        }


        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }


    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}*/
//task5
int main()
{
    int arr[100], freq[100];
    int size, i, j, count;


    printf("Enter size of array: ");
    scanf("%d", &size);


    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);

        freq[i] = -1;
    }


    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {

            if(arr[i]==arr[j])
            {
                count++;


                freq[j] = 0;
            }
        }


        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }


    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
