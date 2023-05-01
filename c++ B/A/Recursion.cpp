//*******************Recursion functions*************************

#include<iostream>
using namespace std;

//*******************Factorial***************************

 /* int factorial(int n){
    if(n<=1){     
        return 1;
    }
    return n * factorial(n-1);
} */

//*******************Function**************************
/* int function(int n){
    for (int i = 0; i < 5; i++)
    {
        return i=3;
    }
    return n * function(n-3);
}*/

//******************Fibonachi******************

int fib(int n){
    if (n<=2)
    {
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main(){

    //********************factorial*******************
/* int a;
cout<<"Enter number"<<endl;
cin>>a;
cout<<"the function a is"<<factorial (a)<<endl;*/

//function
 /* int a;
cout<<"Enter the value"<<endl;
cin>>a;
cout<<"the function a is"<<function (a)<<endl;  */


// *********fibonachi function|**********
int a;
cout<<"enetr number"<<endl;
cin>>a;
cout<<"the function a is"<<fib (a)<<endl;
return 0;
}