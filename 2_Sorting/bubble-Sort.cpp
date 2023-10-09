#include <iostream>
using namespace std;

int main(){
    int arr[4] = {4,3,2,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    int counter=1;
    for(int i = 1; i<n; i++) {
        //for round 1 to n-1
        bool isSwapped = false;
        
        for(int j =0; j<n-i; j++) {
            
            //process element till n-i th index
            if(arr[j] > arr[j+1]) {
                 int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
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
