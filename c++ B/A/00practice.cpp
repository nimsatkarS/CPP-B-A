#include<iostream>
using namespace std;

class student
{
    private:
    int a,b,c;
    
    public:
    int d,e;

void indata(int a,int b,int c,int);
void outdata(){
cout<<"The value of a"<<a<<endl;
cout<<"The value of b"<<a<<endl;
cout<<"The value of c"<<a<<endl;
cout<<"The value of d"<<a<<endl;
cout<<"The value of e"<<a<<endl;
}       
    };
void student::indata(int A1,int B2,int C3)
{
a=A1;
b=B2;
c=C3;
}
int main(){

student sanket
sanket.d(41);
sanket.e(20);

sanket.indata(41,5,7);
sanket.outdata();
return 0;
}