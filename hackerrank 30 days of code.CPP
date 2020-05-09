#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    int int_input;
    double double_input;
    string string_input;
    
    cin>>int_input>>double_input;
    cin.ignore();
    getline(cin, string_input);
    
    // printf("%.2f", d);
    cout<< i + int_input << endl << fixed << setprecision(1) << d + double_input << endl << s << string_input ;
    
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;