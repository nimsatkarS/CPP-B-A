//***********Class, Public and Private***********

#include <iostream>
using namespace std;

class Employee

{
private:
    int a,b,c;

public:
    int d, e;
    void indata(int a1, int b1, int c1);
    void outdata()
    {
    cout << "The value of a is" << a << endl;
    cout << "The value of b is" << b << endl;
    cout << "The value of c is" << c << endl;
    cout << "The value of d is" << d << endl;
    cout << "The value of e is" << e << endl;
    }
};

void Employee :: indata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main(){

    Employee  mayur;
       /* mayur.a = 123; get will throw error */
        mayur.d = 67;
        mayur.e = 23;
       // mayur.c = 45;
        mayur.indata(1,2,5);
        mayur.outdata();
        0; 
    return 0;
}