/*#include<iostream>
using namespace std;

class Employee{
int Id;
static int count;

public:
void setData(void){
cout<<"Enter the id"<<endl;
cin>>Id;
count++;
}
void getData(void){
    cout<<"teh id of employee"<< Id <<"and this is employee number"<<count<<endl;
}
};
int Employee :: count=10;

int main(){
Employee harry,rohan,chetan; 

harry.setData();
harry.getData();

rohan.setData();
rohan.getData();

chetan.setData();
chetan.getData();
return 0;
}*/

/* #include<iostream>
using namespace std;

class Student{
int id;
static int count;

public:
void setData(void){
    cout<<"Enter the student id"<<endl;
    cin>>id;
    count++;
}
void getDAta(void){
    cout<<"THE student number is"<< id <<"And the number is"<<count<<endl;
}
};
int Student :: count;
int main(){
Student naman,sahurab,rudra;

naman.setData();
naman.getDAta();

sahurab.setData();
sahurab.getDAta();

rudra.setData();
rudra.getDAta();

return 0;
}*/

#include<iostream>
using namespace std;

class Store{
int id;
 static int count;
public:

void showData(void){
    cout<<"Enter the store id"<<endl;
    cin>>id;
    count++;
}
void hideData(void){
    cout<<"store id is "<<id<<"And the number 1of store is"<<count<<endl;
}
};
int Store::count;
int main(){
Store bookstore,jeneralstore,pharmastore,sweetstore;

bookstore.showData();
bookstore.hideData();

jeneralstore.showData();
jeneralstore.hideData();

pharmastore.showData();
pharmastore.hideData();

sweetstore.showData();
sweetstore.hideData();

return 0;
}