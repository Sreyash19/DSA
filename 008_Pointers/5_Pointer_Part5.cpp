#include <iostream>
using namespace std;

void update(int **p2){
    // p2 = p2 + 1;
    //any change? -  NO

    // *p2 = *p2 + 1;
    //any change? - YES

    // **p2 = **p2 + 1; - YES
    //any change?

    //Explanation of all above in notebook
}

int main(){
    //DOUBLE POINTERS
    int i=5;
    int *p = &i;
    int **p2=&p;

    /*
    cout<<"All good"<<endl;
    cout<<"Printing P : "<<p<<endl;    
    cout<<"address of  P : "<<&p<<endl;    

    cout<<"printing *p2 : "<<*p2<<endl;
    cout<<"printing p2 : "<<p2<<endl;

    cout<<"value of i : "<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<"value of p : "<<endl;
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<"Address of p : "<<endl;
    cout<<&p<<endl;
    cout<<p2<<endl;
    */

   cout<<"before "<<i<<endl;
   cout<<"before "<<p<<endl;
   cout<<"before "<<p2<<endl;
   update(p2);
   cout<<endl<<endl;
   cout<<"after "<<i<<endl;
   cout<<"after "<<p<<endl;
   cout<<"after "<<p2<<endl;
    return 0;
}