#include <iostream>
using namespace std;

class Sort
{
    int arr[5];
public:
    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    void sort(int abc[], int range)
    {
        int index_of_min_value =0;
        for(int i=0; i<range-1; i++)
        {
            index_of_min_value = i;

            for(int j=i+1; j<range; j++)
            {
                if(abc[j] < abc[index_of_min_value])
                {
                    index_of_min_value = j;
                }
            }
            swap(&abc[i], &abc[index_of_min_value]);
        }
        for(int i = 0; i < range; i++) arr[i] = abc[i];
    }

    void print()
    {
        for(int i=0; i<5; i++)
        {
            cout<<arr[i]<<"  ";
        }
    }

    void bubbleSort()
    {

        int tmp = 0;
        int mny[5]=  {77,44,11,99,66};
        int index_of_min_value =0;

        int r = sizeof(mny)/sizeof(mny[0]);
        for(int i=0; i<5; i++)
        {
            cout<<mny[i]<<"  ";
        }
        cout<<endl;
        cout<< "------------" <<endl;

        for(int i=0; i<r-1; i++)
        {

            index_of_min_value = i;

            for(int j=i+1; j<r; j++)
            {
                if(mny[j] < mny[index_of_min_value])
                {
                    index_of_min_value = j;
                }
            }

            tmp = mny[index_of_min_value];
            mny[index_of_min_value] = mny[i];
            mny[i] = tmp;
        }
        cout<<"Sorted array"<< endl;
        for(int i=4; i>=0;  i--)
        {
            cout<<mny[i]<<"  ";
        }
    }
    void selectionSort()
    {
        int abc[5]=  {77,44,11,99,66};
        //  int abc[5];
        cout<<"Unsorted array"<< endl;
        //  for(int i = 0; i < 5; i++) cin >> abc[i];

        int range = sizeof(abc)/sizeof(abc[0]);
        for(int i=0; i<5; i++)
        {
            cout<<abc[i]<<"  ";
        }
        cout<<endl;
        cout<< "------------" <<endl;

        Sort ob;
        ob.sort(abc,range);
        cout<<"Sorted array"<< endl;
        ob.print();
    }
};

int main()
{


    Sort obj;
    obj.selectionSort();

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Unsorted array";
    cout<<endl;


    obj.bubbleSort();

    return 0;
}
