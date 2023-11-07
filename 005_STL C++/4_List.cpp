#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> l;

    l.push_back(1);
    l.push_front(2);
    
    for(int i:l){
        cout<<i<<' ';
    }

    cout<<endl;
    l.erase(l.begin()); //the element which it points get deleted
    cout<<"after erase "<<endl;
    for(int i:l){
        cout<<i<<' ';
    }
    cout<<endl;
    list<int> a(l); //new list a which have copied elemnts of l
    list<int> b(5,100); //list b of size 5 and initial values as 100
    for(int i:b){
        cout<<i<<' ';
    }
    return 0;
}