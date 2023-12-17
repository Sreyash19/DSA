#include<iostream>
using namespace std;
class Human{
    // public:

    protected:
    int height;
    int weight;
    private:
    int age;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight= w;
    }
};

 class Male :public Human{
// class Male :protected Human{
// class Male :private Human{
    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }

    int getHeight(){
        return this->height;
    }
    int getAge(){
        // return this->age; //not accessible as age is private in Base Class
    }
};

int main()
{
    Male m1;
    // cout<<m1.height<<endl;
    cout<<m1.getHeight()<<endl;
    //cout<<m1.height<<endl; //inaccessible for protected
    
    
    
    
    
    //Male obj1;
    // //cout<<obj1.age<<endl; //error coz age is marked private
    // cout<<obj1.weight<<endl;
    // cout<<obj1.height<<endl;
    // cout<<obj1.color<<endl;
    // obj1.sleep();
    // obj1.setWeight(84);
    // cout<<obj1.weight<<endl;
    return 0;
}