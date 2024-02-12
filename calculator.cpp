#include <iostream>
using namespace std;
int main()
{
    float n1,n2;
    int choice;
    cout<<"Enter two integers : ";
    cin>>n1;
    cin>>n2;
    cout<<"1.Addition\n2.Subtraction\n3.Multiplication\4.Division\n";
    cout<<"Enter your choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
             cout<<"Addition of "<<n1<<"and "<<n2<<" is "<<n1+n2;
             break;
        case 2:
             cout<<"Subtraction of "<<n1<<"and "<<n2<<" is "<<n1-n2;
             break;
        case 3:
             cout<<"Multiplication of "<<n1<<"and "<<n2<<" is "<<n1*n2;
             break;
        case 4:
             if(n2==0){
                 cout<<"Addition is not possible";
             }else{
                cout<<"Division of "<<n1<<"and "<<n2<<" is "<<n1/n2;
                break;
             }
        default:"Choose choice from given options";
    }
}
