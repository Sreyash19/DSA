#include<iostream>
using namespace std;

bool linearSearch(int *arr, int size, int key){
    //base case
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        int remainingPart = linearSearch(arr+1, size-1, key);
        return remainingPart;
    }
}


int main()
{
    int arr[5] = {3,5,1,2,6};
    int size=5;
    int key = 2;
    int ans = linearSearch(arr,size,key);
    if(ans){
        cout<<"Key present";
    }
    else{
        cout<<"Key absent";
    }
    return 0;
}