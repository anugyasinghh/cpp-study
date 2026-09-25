#include<iostream> // Include the iostream library for input/output operations
using namespace std; // Use the standard namespace to avoid prefixing standard library names with "std::"
 int main () { // Main function where the execution of the program begins
   
    int a = 10; // Declare an integer variable 'a' and initialize it with the value 10
   
   
    float b = 10.69 ; // Declare a float variable 'b' and initialize it with the value 10.69
   
   
    char lund = 'a'; // Declare a character variable 'lund' and initialize it with the character 'a'
   
   
   
   
    cout << "value of a is" <<a << endl ; // Output the value of 'a' to the console
   
    cout << "value of b is "<<b << endl ;// Output the value of 'b' to the console
   
    cout << "value of lund  is " << lund << endl ; // Output the value of 'lund' to the console
   
    cout << " size of a is " << sizeof(a)<< endl; // Output the size of the variable 'a' in bytes to the console
   
    cout << " size of b is " << sizeof(b)<< endl; // Output the size of the variable 'b' in bytes to the console
   
   
    cout << " size of lund is " << sizeof(lund)<< endl; // Output the size of the variable 'lund' in bytes to the console
   
   
   
   
    return 0 ; // Return 0 to indicate that the program has executed successfully
 } 