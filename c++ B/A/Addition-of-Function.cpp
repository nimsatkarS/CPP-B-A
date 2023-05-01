//addintion of two number using function
#include<iostream>
using namespace std;

int sum(int a,int b){
    int c=a+b;
return c;
}

int main(){
int a,b;
cout<<"Enter the two value"<<endl;

cout<<"Enter the value of a"<<endl;
cin>>a;

cout<<"Enter the value of b"<<endl;
cin>>b;
cout<<"the sum of a & b="<<sum(a,b)<<endl;
return 0;
}