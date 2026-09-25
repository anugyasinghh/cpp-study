#include<iostream>
using namespace std;


 int main () {

    char grade  ;
    cout << "enter your grade" << endl;
    cin >> grade ; 

    switch (grade) {


        case 'a':  cout << "jeeyo raja" << endl ; 
        break;

        case 'b': cout << "theek thak " << endl ; 
        break;

        case 'c': cout << "acha lode" << endl ; 
        break;

        default : cout << "ayy tor maikechodo" << endl ; 

    }


    return 0;
 }