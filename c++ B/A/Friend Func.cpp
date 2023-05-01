//********************Friend function*********************
/* #include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    void setNumber(int n1,int n2){
        a=n1;
        b=n2;
    }
    friend Complex sumComplex(Complex o1,Complex o2);
    void printNumber(){
        cout<<"your number is"<<a<<"+"<<b<<"i"<<endl;
    }
};
Complex sumComplex(Complex o1,Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a),(o1.b + o2.b));
    return o3;
}

int main(){

Complex c1,c2,sum;
c1.setNumber(1,4);
c1.printNumber();

c2.setNumber(5,4);
c2.printNumber();

sum=sumComplex(c1,c2);
//sum=printNumber();

return 0;
} */

/*************************Friend Function by DJ****************

#include <iostream>
using namespace std;
class Box
{
private:
    int length;

    friend int printlength(Box);
};
int printlength(Box b)
{
    b.length = 10;
    return b.length;
}
int main()
{
    Box b;
    cout << "length is ::"<< printlength(b) << endl;

    return 0;
} */

//BY ME 
 #include<iostream>
using namespace std;
class Cube
{
private:
    int cubic;

    friend int printcube(Cube);
};
int printcube(Cube c){
c.cubic = 2;
return c.cubic;
}

int main(){
Cube c;
cout<<"cubic is::"<<printcube(c)<<endl;
return 0;
}


/* #include<iostream>
using namespace std;

class Data
{
    // Here data will usign the Data is always private member
int a,b;

public:
void set(){
    a=10;
    b=20;
}
friend void show(Data);
};
void show (Data d1)
{
    cout<<d1.a<<endl;
    cout<<d1.b<<endl;
}
int main(){
Data d1;
d1.set();
show(d1);
return 0;
}*/