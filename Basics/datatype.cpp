// datatypes are the classification of data that tells the compiler or interpreter how the programmer intends to use the data. It defines the type of value a variable can hold, such as integer, floating-point, character, or boolean. In C++, data types are divided into several categories, including fundamental types (like int, float, char), derived types (like arrays, pointers), and user-defined types (like classes and structures).
// int age  = 25 (example)
// now in this int is the data type which says what kinda data is thsi that means integeer and 25 is the data and age the place wheere we store the data 25 an dit is named as age which is varialble 
#include<iostream>
using namespace std;
int main (){
    // int data type
    int count = 10; // here int is the data type which says what kind of data this is, that means integer, and 10 is the data, and count is the name of the variable where we store the data 10. It is named as count which is a variable.//
    // float data type 
    float price = 19.99; // here float is the data type which says what kind of data this is, that means floating-point, and 19.99 is the data, and price is the name of the variable where we store the data 19.99. It is named as price which is a variable.//
    // char data type 
    char alphabet = 'a';
    // double data type
    double weight =12.69;
    // boolean data type 
    bool isAvailable = true; // here bool is the data type which says what kind of data this is, that means boolean, and true is the data, and isAvailable is the name of the variable where we store the data true. It is named as isAvailable which is a variable.//
    bool islund = false ; 
    cout << count << endl;
    cout << price<< endl;
    cout << alphabet << endl;
    cout << weight << endl;
    cout << isAvailable << endl;
    cout << islund << endl;
    int age = 25 ;
    cout << sizeof(age)<< endl;

    return 0 ;

} // how data is stored ? the answer is that the data is stored in the memory of the computer. The memory is divided into small units called bytes, and each byte can store a certain amount of data. The size of the data type determines how many bytes are used to store the data. For example, an int typically uses 4 bytes, a float uses 4 bytes, a char uses 1 byte, and a double uses 8 bytes. The sizeof operator can be used to determine the size of a data type or variable in bytes.

