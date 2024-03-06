#include<iostream>
using namespace std;
class SuperClass
{
  public:
    int publicVar=1;
  private:
    int privateVar=2;
  protected:
    int protectedVar=3;
  public:
    int getValpri()
    {
       return privateVar;
    }
    int getValpro()
    {
         return protectedVar;
    }
    int getValpub()
    {
       return publicVar;
    }
};
//public Inheritance
class SubClass01: public SuperClass
{
   public:
      int var1=publicVar;
      int var2=protectedVar;
      int var3=getValpri();
};
//private Inheritance
class SubClass02: private SuperClass
{
  public:
    int var01=publicVar;
    int var02=protectedVar;
    int var03=getValpri();
};
//protected Inheritance
class SubClass03: protected SuperClass
{
   public:
     int var001=publicVar;
     int var002=protectedVar;
     int var003=getValpri();
};
int main()
{
  SuperClass obj;
  SubClass01 obj1;
  SubClass02 obj2;
  SubClass03 obj3;
  cout<<"SubClass01\n";
  cout<<"Public : "<<obj1.var1<<endl;
  cout<<"Protected : "<<obj1.var2<<endl;
  cout<<"Private : "<<obj1.var3<<endl;
  cout<<"SubClass02\n";
  /*cout<<"Public : "<<obj.publicVar<<endl;
  cout<<"Protected : "<<obj.privateVar<<endl;
  cout<<"Private : "<<obj.protectedVar<<endl;*/
  cout<<"Public : "<<obj2.var01<<endl;
  cout<<"Protected : "<<obj2.var02<<endl;
  cout<<"Private : "<<obj2.var03<<endl;
  cout<<"SubClass03\n";
  cout<<"Public : "<<obj3.var001<<endl;
  cout<<"Protected : "<<obj3.var002<<endl;
  cout<<"Private : "<<obj3.var003<<endl;
  return 0;
}