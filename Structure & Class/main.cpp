#include <iostream>

using namespace std;

struct Student
{
public:
    int id;
    string name;
    float cgpa;
    void print()
    {
        cout<<"Id: " <<id <<"\nName: "<<name<<"\nCGPA: "<<cgpa<<endl;
        cout<<endl;
    }
};

Student getStudentWithHighestCgpa(struct Student arr[], int size)
{
    float highcg=arr[0].cgpa;
    Student stdt;

    for (int i =0; i<size; i++)
    {
        if (arr[i].cgpa>highcg)
        {
            highcg=arr[i].cgpa;
            stdt=arr[i];
        }
        return stdt;
    }
}

int main()
{
    Student s[5];

    s[0].id=1127;
    s[0].name="Alen";
    s[0].cgpa=4.00;
    s[0].print();

    s[1].id=1001;
    s[1].name="Akash";
    s[1].cgpa=3.75;
    s[1].print();

    s[2].id=1007;
    s[2].name="Avro";
    s[2].cgpa=3.50;
    s[2].print();

    s[3].id=1027;
    s[3].name="Asmaul";
    s[3].cgpa=3.00;
    s[3].print();

    s[4].id=1067;
    s[4].name="Hossain";
    s[4].cgpa=3.33;
    s[4].print();

    cout<<"Highest CGPA student information: \n"<<endl;
    getStudentWithHighestCgpa(s,5).print();
}
