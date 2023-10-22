#include <iostream>
//include this to use STL array
#include <array>
using namespace std;

int main(){
    int arr[3]={1,2,3}; //basic array

    array<int,4> a={1,2,3,4}; //STL array
    //array<dataType, arraySize> name = {};
    //this array is based on basic array, its static and can perform basic operations as done below
    //Thats why we usually don't use this  


    //accessing elements 
    int size = a.size();
    for(int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }

    cout<<"Element at 2nd index "<<a.at(2)<<endl; //gives element present at index 2 in vector array
    cout<<"Empty or not "<<a.empty()<<endl;
    cout<<"First Element "<<a.front()<<endl;
    cout<<"Last Element "<<a.back()<<endl;

}