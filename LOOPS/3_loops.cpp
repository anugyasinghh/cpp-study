// break keyword


#include<iostream>
using namespace std ; 

int main() {

    for (float i = 9; i<=100 ; i=i+1 ) {
        cout << i << "    " ; 
        if (i==69) {
            break;
        }
    }

    return 0 ;
} 