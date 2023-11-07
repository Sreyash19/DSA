#include <iostream>
using namespace std;
//macro
#define PI 3.14 //Object Like macro
//Its not a variable and values replaced before compiling so no memory needed
//Beforing compiling all the PI in the code will be replaced with 3.14
//cannot modify macro 
//No semicolon ; needed

//function like macro
#define AREA(l, b) (l * b)

//chain macro
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 138

//MultiLine Macro
#define ELE 1, \
            2, \
            3


int main(){
    int r=5;
    // double pi=3.14;
    // double area = 3.14*r*r;
    double area1 = PI*r*r;
    // double area= 3.14*r*r  before compilation PI will be replaced with 3.14

    // PI = PI+1; NO 
    cout<<"Area is "<<area1<<endl;

    
    int l1 = 10, l2 = 5, area;
    // Find the area using macros
    area = AREA(l1, l2);
//  whenever AREA(l, b) this appears it will be replaced by (l * b)
    // Print the area
    printf("Area of rectangle"
           " is: %d",
           area);
 
    cout<<endl<<endl;
    cout<<"Chain Macro "<<endl;
    cout<<INSTAGRAM;

    cout<<endl<<endl;
    cout<<"MultiLine Macro "<<endl;
    int arr[] = {ELE};
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;

    
    return 0;
}