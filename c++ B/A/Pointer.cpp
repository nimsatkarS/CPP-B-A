//***************Pointer in C++******************
//Address of memory location

//DEF=POINTER ARE VARIABLE THAT'S STORE THE ADDRESS OF OTHER VARIABLE

/* #include<iostream>
using namespace std;

int main(){
    
// what is pointer

int a=4;
int * b=&a;
b= &a;

//&-->adddress of operator
//*-->is the deference of operator
    
cout<<&a<<endl;
cout<<b<<endl;
//dereference of operator

//*-->(value at present in the * notation)Dereference of operator
cout<<*b<<endl;


return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
int a = 5;
int *aptr=&a;
aptr = &a;


cout<<&a<<endl;
cout<<*aptr<<endl;
*aptr=20;
cout<<a<<endl;

return 0;
}

//character pointer
#include<iostream>
using namespace std;

int main(){
char ch = 'a';
char *cptr = &ch;
cout<<cptr<<endl;

cptr++;
cout<<*cptr<<endl;
return 0;
}*/

//Implimentation of pointer conversion

#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main(){
int a=2;
int b=4;

swap(&a,&b);
cout<<a<<""<<b<<endl;
return 0;
}