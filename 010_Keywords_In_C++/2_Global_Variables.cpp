#include <iostream>
using namespace std;

int score = 15; //global variable
//never use it, its a bad practice
//because Any one can change it
void a(int& i){
    cout<<i<<endl;
    cout<<"in a "<<score<<endl;
    score++; //change global variable named score 
}
void b(int& i){
    cout<<i<<endl; 
    cout<<"in b "<<score<<endl;
}

int main(){
    int i=5;
    
    cout<<"in main "<<score<<endl;
    a(i);
    b(i);

    {
        int i=2;
        cout<<i<<endl; //2
    }

}