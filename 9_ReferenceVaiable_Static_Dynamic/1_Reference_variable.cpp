#include <iostream>
using namespace std;

void update(int n){
    //pass by value
    n++;
}

void update2(int &n){
    //pass by reference
    n++;
}

/*
int& func(int a){
    int num=a; //limited to this function only
    int &ans=num;
    return ans;
    //never use this type returning reference
    //As the variables are limited to this scope only and after the function ended 
    //the memory will be cleared hence there will be nothing at that refernce
}
*/
/*
Similarly as above avoid with pointers also
int* func(int n){
    int *ptr=&n;
    return ptr;
}
*/
int main(){

    int i=5;
    //Create reference Variable
    int &j =i;
    cout<<i<<endl; //5
    i++;
    cout<<i<<endl; //6
    j++;
    cout<<i<<endl; //7
    cout<<j<<endl; //7
    cout<<endl;
    int n=5;
    cout<<"Before "<<n<<endl; //5
    update(n);
    cout<<"After "<<n<<endl; //5
    update2(n);
    cout<<"Now after reference variable passed : "<<endl; //6
    cout<<n<<endl;

    // cout<<func(n)<<endl;

    return 0;

}