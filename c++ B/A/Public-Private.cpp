//******************class and object****************
#include <iostream>
using namespace std;

class demo9
{
private:
    int num1, num2,num3;

public:
    int num4, num5;
    void readdata(int num1, int num2,int num3);
    void checkdata()
    {
        cout << "The value of num1 is" << num1 << endl;
        cout << "The value of num2 is" << num2 << endl;
        cout << "The value of num3 is" << num3 << endl;
        cout << "The value of num4 is" << num4 << endl;
        cout << "The value of num5 is" << num5 << endl;
    }
};
    void demo9::readdata(int num9,int num8,int num7)
    { //it data will be privare
       num1=num9;
       num2=num8;
       num3=num7;
    }
int main(){
      
      demo9 sanket;
      //sanket.num1=500;
      sanket.num4=23;
      sanket.num5=55;
      sanket.readdata(5,6,0);
      sanket.checkdata();
    return 0;

}