#include<iostream>
using namespace std;
//Function Overloading
class A{
    public:
    void sayHello(){
        cout<<"Hello Sreyash Kunkekar"<<endl;
    }

    void sayHello(string name,int num){
        cout<<"Hello "<<name<<endl;
        
    }
    int sayHello(string name){
        cout<<"Hello"<<endl;
        return 1;
    }
};
//Operator Overloading
class B{
    public:
    int a;
    int b;
    public:
    int add(){
        return a+b;
    }
    void operator+ (B &obj){
        int val1 = this->a;
        int val2 = obj.a;
        // cout<<"val2 "<<val2<<endl;
        cout<<"Output "<<val2-val1<<endl;
    }

    void operator() (){
        cout<<"bracket "<<this->a<<endl;
    }
    void operator- (B &obj){
        cout<<"me minus nahi hu"<<endl;
    }
};
int main()
{
    A obj;
    obj.sayHello();
    
    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1+obj2;
    // obj1 -> Current obj
    // obj2 -> input argument
    // obj1();
    // obj1-obj2;
    // return 0;

}