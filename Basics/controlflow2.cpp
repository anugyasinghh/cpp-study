// if else block 



#include <iostream>
using namespace std;
int main (){
    int weight ;
    cout << "enter your weight:  " << endl;
    cin >> weight;
// yha pe input ;e lia h already which is enter your weight with cout and cin me input lega which is weight 

// ab yha se khela start huwa hh which is 
// agar if me condition true hoga to if ke under wala code
//xecute hoga and agar false hoga to else if me jaega 
//and agarse if me bhi false hoga to else me jaega

    if (weight < 50) { 
        cout << "you are fine " << endl;
        
    }
    else if (weight <100) { 
        cout<< "you are damn fine"<<endl;

    }
    else if (weight > 100) {
        cout << "you are a fat bitch " << endl;
    }



return 0 ;
}