#include <iostream>
using namespace std;

int main(){
    int num=5;
    cout<<num<<endl;

    //address of operator - &
    cout<<"Address of num is "<< &num<<endl;
    //address is in hexadecimal 

    // * -> dereference operator
    int *ptr = &num;
    cout<<"Value is: "<<*ptr<<endl; //give value that is present at address its pointing
    cout<<"Value is: "<<ptr<<endl; //give the address it's pointing / storing

    double d=4.3;
    double *p2 = &d;

    cout<<"Address is : "<<p2<<endl;
    cout<<"Value is : "<<*p2<<endl;

    cout<<" Size of integer is "<<sizeof(num)<<endl;
    cout<<" Size of pointer is "<<sizeof(ptr)<<endl;

    cout<<endl<<endl;

    //pointer to int is created and pointing to some garbage address
    // int *p; 
    // int *p=0;
    // cout<<*p<<endl; //gives segmentation fault as there is no such memory 0 exists


    int i=5;
    // int *p = &i;

    int *p=0;
    p=&i;

    cout<<p<<endl;
    cout<<*p<<endl;

    int *q=&i;
    cout<<q<<endl;
    cout<<*q<<endl;

    cout<<endl<<endl;

    int number = 5;
    int a = number;
    a++;
    cout<<"Value of number : "<<number<<endl; //no change on number

    int *ptr2 = &number;
    int b=*ptr2;
    b++;
    cout<<"Value of b : "<<b<<endl;
    cout<<"Value of pointer : "<<*ptr<<endl;
    cout<<"Value of number : "<<number<<endl;
    //no change on number and *ptr only b changes    

    int number2 = 5;
    int *ptr3 = &number2;
    cout<<"before Number2 is  : "<<number2<<endl;
    (*ptr3)++;

    cout<<"After Number2 is : "<<number2<<endl;
    cout<<endl<<endl;
    //CPOYING POINTER INTO POINTER
    cout<<"COPYING POINTER INTO POINTER"<<endl;
    int *ptr4 = ptr3;
    cout<<ptr4<<" - "<<ptr3<<endl;
    cout<<*ptr4<<" - "<<*ptr3<<endl;
    
    int age=21;
    // int **umra = &age; //error
   
   //***** IMPORTANT CONCEPT *****
   int x=3;
   int *t = &x;
//    (*t)++;
    *t=*t+1; 
   cout<<"After increment : " <<*t <<endl;

    cout<<"before t "<<t<<endl;
    t=t+1;
    //t will move to next character for int by 4 and similarly for char,double etc according to there sizes
    cout<<"After t "<<t<<endl;
     
    cout<<endl<<endl;
    cout<<"New gives error"<<endl;
    int *z=0;
    int y=10;
    *z=y;
    cout<<*z ; //error
    return 0;
}