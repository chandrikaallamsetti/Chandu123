#include<iostream>
using namespace std;

inline void displayWelcomeMessage()
{
    cout<<"Welcome, user!!"<<endl;
}

class Box 
{
    private:
        float len;
        float wid;
        float hei;
    public:
        void boxArea(float l,float w,float h)
        {
            float area=2*((l*w)+(w*h)+(h*l));
            cout<<"The area of the box : "<<area<<endl;
        }
        void boxVolume(float l,float b,float h);
        void set(float length,float width,float height)
        {
            len=length;
            wid=width;
            hei=height;
        }
        friend void displayBoxDimensions(Box d);
};

void displayBoxDimensions(Box v)
{
    cout<<"The dimensions are : "<<v.len<<" X "<<v.wid<<" X "<<v.hei<<endl;
}

void Box::boxVolume(float l,float b,float h)
{
    float volume=l*b*h;
    cout<<"The volume of the box : "<<volume<<endl;
}

int main()
{
    Box b;
    float length,width,height;
    cout<<"Enter the length, width, and height : ";
    cin>>length>>width>>height;
    b.set(length,width,height);
    b.boxArea(length,width,height);
    b.boxVolume(length,width,height);
    displayBoxDimensions(b);
    displayWelcomeMessage();
    return 0;
}
