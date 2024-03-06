//simpleinheritance
#include<iostream>
using namespace std;
class Tiger
{
public:
void displayBreed()
{
cout<<"I belong to the carnivore type.\n";
}
void eat()
{
cout<<"I eat meat and cheese\n";
}
};
class Cub: public Tiger
{
    public:
void play()
{
cout<<"I play a lot\nIt helps me to bond to my family\n";
}
void skills()
{
cout<<"With this I develop lot of skills that I could use later\n";
}
};
int main()
{
Cub obj;
obj.displayBreed();
obj.eat();
obj.play();
obj.skills();
return 0;
}