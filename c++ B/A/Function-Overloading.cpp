//**********Function overloading*******************
#include<iostream>
using namespace std;

int sum(int a, int b) 
{
    return a + b;
}


int sum(int a, int b, int c){
    return a + b + c;
}
//claculate the value of cylender
int volume(int r,int h){
    return(3./14 *r*r*h);
}
//calculate the value of cube
int volume(int a){
    return (a* a* a);
}
//Rectangular box
int volume(int l,int b,int h){
    return(l*b*h);
}
int main(){

cout<<"the sum is"<<sum(3,6)<<endl;
cout<<"the sum is"<<sum(3,7,6)<<endl;
cout<<"the sum is"<<volume(3,6)<<endl;
cout<<"the sum is"<<volume(3,2)<<endl;
cout<<"the sum is"<<volume(3,2)<<endl;
return 0;
}