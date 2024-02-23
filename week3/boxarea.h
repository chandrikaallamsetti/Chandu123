#include<iostream>
using namespace std;
#define areaBox

void area(float l,float b,float h)
{
  float area=2*((l*b)+(b*h)+(h*l));
  cout<<"The area of the box : "<<area<<endl;
}
