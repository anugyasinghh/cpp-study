#include<iostream>
using namespace std ;

int main () {
    int height ;
    cout << "enter your height " << endl ;
    cin >> height;

    int weight ;
    cout << "enter your weight  " << endl ;
    cin >> weight;


    if (height >6){
      if (weight> 70) {
        cout << "good" << endl;
      }
        else {
            cout << "nahhh" << endl; 

        }
      
    }
    else {
        cout << "lelepudina" << endl ;  
    }




    return 0  ; 
}