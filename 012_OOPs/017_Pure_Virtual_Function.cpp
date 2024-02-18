#include<iostream>
using namespace std;

//Abstract Class
class Shape{
    public:
        //pure virtual function
        virtual int get_area() = 0;
};

class Square : public  Shape{
    int a;
    public:
        Square( int l){
            a = l;
        }

        int get_area(){
            cout<<"Square "<<a*a<<endl;
            return a*a;
        }
};

class Rectangle : public Shape{
    int l, w;

    public:
        Rectangle(int length, int width){
            l = length;
            w = width;
        }
        int get_area(){
            cout<<"Rectangle "<<l*w<<endl;
            return l*w;
        }
};

int main()
{
    Shape* s;
    Square sq(10);
    Rectangle rec(10,20);
    s= &sq;
    s->get_area();
    s= &rec;
    s->get_area();


    return 0;
}