#include<iostream>
using namespace std;
// Types Of Inheritance
// 1 Single
// 2 Multilevel
// 3 multiplies
// 4 Hierarchical
// 5 hybrid

class Animal{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"Speaking"<<endl;
    }
};
//Single Inheritance 
class Dogs: public Animal{
    
};
//MultiLevel Inheritance
class GermanShepherd : public Dogs{

};

class Human{
    public:
    string color;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

//Multiple Inheritance
class Hybrid: public Animal, public Human{

};

//Hierarchical Inheritance
class A{
    public:
    void speak1(){
        cout<<"Speaking A"<<endl;
    }
};

class B: public A{
    public:
    void speak2(){
        cout<<"Speaking B"<<endl;
    }
};
class C: public A{
    public:
    void speak3(){
        cout<<"Speaking C"<<endl;
    }
};
int main()
{
    Dogs d;
    GermanShepherd g;
    d.bark();
    g.bark();
    cout<<d.age<<endl;
    cout<<endl;
    Hybrid h;
    cout<<"Multiple Inheritance"<<endl;
    h.speak();
    h.bark();
    cout<<endl;
    cout<<"Hierarchical Inheritance"<<endl;
    A obj1;
    obj1.speak1();
    B obj2;
    obj2.speak1();
    obj2.speak2();
    C obj3;
    obj3.speak1();
    obj3.speak3();

    return 0;
}