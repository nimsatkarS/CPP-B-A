//***********************Loops in c++*******************

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
   //   for loop
int i=n;
for (int i = n; i <= 10; ++i)
{
   
    cout<<n<<" * "<< i << "="<<n * i<<endl;
     cout<<n * i<<endl;
}

                           //*****while loop*****
/*int i=1;
while (i<=5)
{
    cout<<i<<endl;
    i++;
}

                           //****do-while loop

int i=1;
do{
cout<<i<<endl;
i++;
}
while (false);

//********* Break and Continue ***************

for (int i = 0; i < 6; i++)
{
    //cout<<i<<endl; for using break statement
    if(i==3){ 
        continue; //break;
    }
     cout<<i<<endl; //for continues
}*/


return 0;
}

    