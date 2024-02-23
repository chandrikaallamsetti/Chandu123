#include<iostream>
using namespace std;

class Student
{
    public:
        string fullName;
        int rollNum;
        double semPerentage;
        string collegeName;
        int collegeCode;
        Student()
        {
            cout<<"Student class is created!!\nIam a student\n";
        }
        ~Student(){}
};

int main()
{
    Student chandu;
    cout<<"Enter your sweet name : ";
    getline(cin,chandu.fullName);
    cout<<"Enter your roll number : ";
    cin>>chandu.rollNum;
    cout<<"Enter your sem percentage : ";
    cin>>chandu.semPerentage;
    cout<<"Enter your college name : ";
    cin>>chandu.collegeName;
    cout<<"Enter your college code : ";
    cin>>chandu.collegeCode;
    cout<<"Name : "<<chandu.fullName<<endl;
    cout<<"Roll Num : "<<chandu.rollNum<<endl;
    cout<<"Sem Percentage : "<<chandu.semPerentage<<endl;
    cout<<"College Name : "<<chandu.collegeName<<endl;
    cout<<"College Code : "<<chandu.collegeCode<<endl;
    return 0;
}
