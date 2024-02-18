#include<iostream>
using namespace std;
//Without Virtual Function
class Space{
    protected:
        int length;
        int width;
    
    public:
        Space(int l, int w){
            length = l;
            width = w;
        }
        int get_area(){
            cout<<"Area in base class"<<endl;
            return 1;
        }
};

class Square : public Space{
    public:
        Square(int l=0, int w=0): Space(l,w){}

        int get_area( ){
            cout<<"Area of square "<<length*width<<endl;
            return (length*width);
        }
};

class Rectangle : public Space{
    public:
        Rectangle(int l=0, int w=0): Space(l,w){}

        int get_area( ){
            cout<<"Area of rectangle "<<length*width<<endl;
            return (length*width);
        }
};

int main()
{
    Space* s;

    Square  sq(5,5); //object of Square class
    Rectangle rec(10,20); //object of rectangle

    s = &sq ;//reference
    s->get_area();

    s = &rec; //reference
    s->get_area();
    return 0;

    //output :
    //  Area in base class
 
}
// We store the address of each child’s class Rectangle and Square object in s and
// Then we call the get_Area() function on it,
// Ideally, it should have called the respective get_Area() functions of the child classes but
// Instead, it calls the get_Area() defined in the base class.
// This happens due to static linkage which means the call to get_Area() is getting set only once by the compiler which is in the base class