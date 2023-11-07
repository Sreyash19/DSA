#include <iostream>
using namespace std;

int main(){
    int arr[6]={8,4,1,5,9,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        int temp= arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){ //Check for indexes goes till index 0 only and check left side elemtn from sorted side is greater
            arr[j+1]=arr[j]; //move the greater element to next position
            j--;  //Decrease the index to move toward left in array
        }
        arr[j+1]=temp; //While loop breaks when either of conditions is false and then place the element in that position

    }
cout<<"Sorted array: ";
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";

}
}