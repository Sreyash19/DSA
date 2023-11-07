#include <iostream>
using namespace std;

//Iterative
int binarySearchIterative(int arr[],int n,int key){
    int start=0;
    int end=n;
    while(start<=end){
        int mid = (start+end)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1; //When key is smaller than mid we move to left side of mid in array and element left to mid is end now
        }
        else{
            start=mid+1; //When key is greater than mid we move to left side of array and start will be now element next to mid 
        }
    }
    return -1;
}

// Recursive
int binarySearchRecursive(int arr[],int start,  int end, int key){
   
    if(start<=end){
        int mid=(start+end)/2;
        
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            return binarySearchRecursive(arr,start, mid-1,key);
        }else{
            return binarySearchRecursive(arr,mid+1,end,key);
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array(Sorted in ascending order): ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key: ";
    cin>>key;
    cout<<"From Iterative: "<<binarySearchIterative(arr,n,key)<<endl;
    cout<<"From Recursive: "<<binarySearchRecursive(arr,0,n-1,key);
    
    return 0;
}