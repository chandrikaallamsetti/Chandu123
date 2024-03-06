#include<iostream>
using namespace std;
class Class1
{
  public:
    void aClass()
    {
       cout<<"I am a ClassA\n";
    }
};
class Class2
{
  public:
    void bClass()
    {
      cout<<"I am a ClassB\n";
    }
};
//Multiple Inheritance
class Class3: public Class1,public Class2
{
  public:
    void cClass()
   {
     cout<<" Iam a ClassC\n";
   }
};
//Simple Inheritance
class Class4: public Class1
{
  public:
    void dClass()
     {
        cout<<"I am a ClassD\n";
     } 
};
//Hybrid Inheritance
class Class5: public Class3,public Class4
{
  public:
    void eClass()
    {
       cout<<"I am a ClassE\n";
    }
};
//Multi-Level Inheritance
class Class6: public Class4
{
  public:
    void fClass()
    {
        cout<<"I am a ClassF\n";
    }
};
//Hierarchical Inheritance
class Class7:public Class1
{
  public:
    void gClass()
    {
       cout<<"I am a ClassG\n";
    }
};
class Class8:public Class1
{
  public:
    void hClass()
    {
       cout<<"I am a ClassH\n";
    }
};
int main()
{
 //Simple Inheritance
 cout<<"Simple Inheritance\n";
 Class4 obj1;
 obj1.aClass();
 obj1.dClass();
 //Multiple Inheritance
 cout<<"Multiple Inheritance\n";
 Class3 obj2;
 obj2.aClass();
 obj2.bClass();
 obj2.cClass();
 //Multi-Level Inheritance
 cout<<"Multilevel Inheritance\n";
 Class6 obj3;
 obj3.aClass();
 obj3.dClass();
 obj3.fClass();
 //Hierarchical Inheritance
 cout<<"Hierarchical Inheritance\n";
 Class7 obj4;
 Class8 obj5;
 obj4.aClass();
 obj4.gClass();
 obj5.aClass();
 obj5.hClass();
 //Hybrid Inheritance
 cout<<"Hybrid Inheritance\n";
 Class5 obj6;
 //obj6.aClass();https://www.onlinegdb.com/#tab-stdin
 //aClass() method becomes ambiguous here
 obj6.bClass();
 obj6.cClass();
 obj6.dClass();
 obj6.eClass();
 return 0;
}
