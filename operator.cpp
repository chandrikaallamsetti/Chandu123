#include<iostream>
using namespace std;
class Complex
{
public:
float real=0,img=0;
Complex(float r,float i)
{
real=r,img=i;
}
Complex operator+(Complex obj)
{
Complex obj1(0,0);
obj1.real=real+obj.real;
obj1.img=img+obj.img;
return obj1;
}
};
int main()
{
float a,b,c,d,e,f;
cout<<"Enter the value of real and img value for a complex number 1 : ";
cin>>a>>b;
cout<<"Enter the value of real and img value for a complex number 2 : ";
cin>>c>>d;
cout<<"Enter the value of real and img value for a complex number 3 : ";
cin>>e>>f;
Complex obj2(a,b),obj3(c,d),obj4(e,f),result(0,0);
result=obj2+obj3+obj4;
cout<<"Sum of Complex Numbers : "<<result.real<<"+"<<result.img<<"i"<<endl;
return 0;
}