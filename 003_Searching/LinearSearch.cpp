#include <iostream>
using namespace std;
 
int LinearSearch(int s,int arr[],int k){
    for(int i=0; i<s; i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}

int main(){
    int s,k;
    cout<<"Enter size of array ";
    cin>>s;
    int arr[s];
    for(int i=0; i<s;i++){
        cout<<"Enter element ";
        cin>>arr[i];
    }
    cout<<"Select an element to search: ";
    cin>>k;


    cout<<"Key Found at index "<<LinearSearch(s,arr,k);
    
}