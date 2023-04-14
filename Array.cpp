#include<iostream>
using namespace std;

int main(){

int marks[4]={23,33,55,63};

cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;

for (int i = 0; i < 4; i++)
{
    cout<<i<<marks[i]<<endl;
}

int* p = marks;

cout<<* p<<endl;
cout<<* (p+1)<<endl;
cout<<* (p+2)<<endl;
cout<<* (p+3)<<endl;

return 0;
}