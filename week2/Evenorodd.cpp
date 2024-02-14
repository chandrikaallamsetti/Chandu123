#include<iostream>
using namespace std;

void checkEvenOdd(int num){
if(num % 2 == 0)
    cout<<num<<" is even.";
else 
    cout << num <<" is odd.";
}

int main(){
    int num;
    cout <<"Enter a  number : ";
    cin >> num;
    checkEvenOdd(num);
    return 0;
}
