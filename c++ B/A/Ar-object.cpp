//************************Array of objects************************
/* #include<iostream>
using namespace std;

class Employee{
int Id;
int salary;

public:
 void setId(void)
 {
    salary= 122;
    cout<<"Enter the id of employee"<<endl;
    cin>>Id;
}
void getId(void){
    cout<<"the id of this employee"<<Id<<endl;
}
};
int main(){

Employee sa[2];
for (int i=0;i<2; i++)
{
    sa[i].setId();
    sa[i].getId();
}
return 0;
}*/

#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
    void setData(int v1,int v2){
        a=v1;
        b=v2;
    }

    void setDataBySum(complex o1,complex o2){

        a=o1.a + o2.a;
        b=o1.b + o2.b;
    }

    void printNumber()
        {
cout<<"your complex number is"<<a<<"+"<<"i"<<endl;
        }    
};

int main(){

complex c1,c2,c3;
c1.setData(1,2);
c1.printNumber();

c2.setData(3,4);
c2.printNumber();

c3.setDataBySum(c1,c2);
c3.printNumber();
return 0;
}