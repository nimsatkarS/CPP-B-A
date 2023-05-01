//Array in POINTER ARITHMATHIC IN cpp
/* #include<iostream>
using namespace std;

int main(){
   //Array of students Marks
int marks[4]={23,33,55,63};

cout<<marks[0]<<endl;//starting with zeroth place student 
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
}*/

#include<iostream>
using namespace std;

int main(){
int Rollno[5]={25,45,78,96,30};

cout<<Rollno[0]<<endl;
cout<<Rollno[1]<<endl;
cout<<Rollno[2]<<endl;
cout<<Rollno[3]<<endl;
cout<<Rollno[5]<<endl;

/*for (int i = 0; i <5; i++)
{
    cout<<Rollno[i]<<endl;
}*/

int* s=Rollno;
cout<<* s<<endl;
cout<<* (s+1)<<endl;
cout<<* (s+2)<<endl;
cout<<* (s+3)<<endl;
cout<<* (s+4)<<endl;
return 0;
}