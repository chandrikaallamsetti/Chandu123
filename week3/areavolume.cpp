#include<iostream>
#include "areaBox.h"
#include "volumeBox.h"
using namespace std;

int main()
{
    float l,b,h;
    cout<<"Enter the length, breadth, and height : ";
    cin>>l>>b>>h;
    #ifdef areaBox
    {
        area(l,b,h);
    }
    #endif
    #ifndef areaBox
    {
        cout<<"areaBox.h file is not included"<<endl;
    }
    #endif
    #ifdef volumeBox
    {
        volume(l,b,h);
    }
    #endif
    #ifndef volumeBox
    {
        cout<<"volumeBox.h file is not included"<<endl;
    }
    #endif
    return 0;
}
