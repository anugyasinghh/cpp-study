//if statemnt is a control flow statement that allows you to execute a block of code conditionally based on a boolean expression. It is used to make decisions in your program and control the flow of execution. The basic syntax of an if statement in C++ is as follows:
// if (condition) {
// if else 
// if-else-if-else
//nestedif


 #include<iostream>
 using namespace std;
 int main () {

    int budget ;
    cout << "enter your budget : " << endl;
    //input le rha h yha pr
    cin >> budget; 
    if  (budget >10000){
        cout << "you can buy skarpio" <<endl; // condition true hon epe ye print hoga 
    }
    else {
        cout << "you cannot buy " << endl;// true na hone par ye print hyega 
    }


    return 0 ;
 }
   
