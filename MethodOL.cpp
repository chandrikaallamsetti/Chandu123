#include<iostream>
using namespace std;
class Chand
{
public:
void variant()
{
cout<<"I have a variant where we are similar in few ways\n";
}
void variant(string variantName)
{
cout<<"VariantName : "<<variantName<<endl;
}
};
int main()
{
Chand obj;
obj.variant(),obj.variant("A.Chandrika");
return 0;
}