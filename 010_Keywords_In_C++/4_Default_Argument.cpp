#include <iostream>
using namespace std;
void print(int arr[], int n,int start=0){
    for(int i=start; i<n; i++){
        cout<<arr[i]<<endl;
    }
}
//always start making default arguments from right and go towards left
void add(int a,int b,int c=5){} //right
void add(int a,int b=8,int c=5){} //right
void add(int a,int b=8,int c){} //wrong
 
int main(){
     
    int arr[5]={1,4,7,8,9};  
    int size=5;
    print(arr,size); //if value not given function will use default argument value
    cout<<endl;
    print(arr,size,2); //if value passed then function will use passed value and not default 

    return 0;
}