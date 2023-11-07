#include<iostream>
using namespace std;

void sortArray(int *arr, int n){
    //base case
    if(n==0 || n==1){
        return ;
    }

    //1 case solved - largest element will be placed at last
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    } 
    //recursive call
    sortArray(arr,n-1);
    //n-1 -> coz size will reduce a one element is placed at right position in each call/iteration
}

int main()
{

    int arr[5]={2,5,1,6,9};
    sortArray(arr,5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}