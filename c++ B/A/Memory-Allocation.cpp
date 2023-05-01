//*********************Memory Allocation******************
#include<iostream>
using namespace std;

class shop
{
    int itemId[50];
    int itemPrice[50];
    int counter;

    public:
    void initCounter(void){counter=0;}
    void setPrice(void);
    void displayPrice(void);
};
void shop :: setPrice(void){
cin>>itemId[counter];
cout<<"Enter the price of item"<<counter+1<<endl;
cin>>itemPrice[counter];
counter++;
}

void shop :: displayPrice(void)
{
    for(int i=0;i<counter;i++)
    {
        cout<<"the price of item"<<itemId[i]<<"is"<<itemPrice[i]<<endl;
}
}
int main(){

shop dukaan;
dukaan.initCounter();
dukaan.setPrice();
dukaan.setPrice();
dukaan.setPrice();
dukaan.displayPrice();
return 0;
}