#include<iostream>
using namespace std;
//Runtime Polymorphism
//Method OverLoading
class Animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }

};
class Dog : public Animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main(){
    Dog obj;
    obj.speak();
    return 0;
}