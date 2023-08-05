#include <iostream>
using namespace std;

int main(){
    int arr[5] = {5,9,6,1,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    int counter=1;
     bool isSwapped = false;
    while(counter<n-1){
        for(int i=0; i<n-counter; i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
              isSwapped = true;
        }
    }
    //  Added this coz if there are no swaps in first round that means the array is already sorted and there is no
    //  need to traverse other rounds
    if(isSwapped==false){

            break;
        }

    counter++;
    }
    
     cout<<"Sorted Array ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
