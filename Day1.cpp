//To complete this challenge, you must save a line of input from stdin to a variable, print Hello, World. 
//on a single line, and finally print the value of your variable on a second line.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

  
    string input_string; 
    getline(cin, input_string); 
    cout << "Hello, World." << endl;

    // TODO: Write a line of code here that prints the contents of input_string to stdout.
    cout << input_string << endl;

    return 0;
}
