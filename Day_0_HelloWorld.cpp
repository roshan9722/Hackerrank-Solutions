/*To complete this challenge, you must save a line of input from stdin to a variable, 
print Hello, World. on a single line, and finally print the value of your variable on a second line.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   string inputString; // declare a variable to hold our input
   getline(cin, inputString); // get a line of input from cin and save it to our variable
  
   // Your first line of output goes here
   cout << "Hello, World." << endl;

   // Write the second line of output
    cout <<inputString;
   return 0;
}
