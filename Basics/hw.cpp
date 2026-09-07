// a new way of printing   something 
// without using name spce std but std::cout 
// what if we use return -1
// 
// 

#include <iostream>
class Solution {
public:
    int readAndPrintInteger(int num) {
        //enter your code here
        std:: cin>> num ;
        std:: cout<< num ;
        return num;
    }
};
