#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  // endl: Newline manipulator
  cout << "Line 1" << endl;
  cout << "Line 2";
  // ends: Forces flush without inserting characters
  cout << ends;
  cout << " (Flushed immediately)";
  // ws: Skips whitespace
  cout << "\nEnter a number with whitespace: ";
  int num;
  cin >> ws >> num;
  cout << "You entered: " << num << endl;
  // flush: Forces data to be written
  cout << "Before flush...";
  cout.flush();
  cout << "After flush (printed immediately)" << endl;
  // setw: Sets minimum field width
  cout << left << setw(20) << "Name:";
  cin >> setw(30) >> ws; // Adjusts width for input too
  cout << setw(20) << "Age:";
  int age;
  cin >> age;
  cout << endl;
  // setfill: Sets character for padding
  cout << setfill('-') << setw(40) << "Personal Info" << endl;
  cout << setfill(' ') << setw(10) << "Name: " << name << endl;
  cout << setw(10) << "Age: " << age << endl;
  // setprecision: Sets decimal places for floating-point
  double pi = 3.14159;
  cout << "Pi (default precision): " << pi << endl;
  cout << setprecision(3) << "Pi (3 decimal places): " << pi << endl;
  return 0;
} 
