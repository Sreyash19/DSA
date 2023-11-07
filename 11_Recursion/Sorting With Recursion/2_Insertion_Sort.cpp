#include<iostream>
using namespace std;

void sortArray(int *arr,int n){
    //base case
    if(n==0 || n==1){
        return ;
    }
    cout<<n<<endl;
    
    sortArray(arr,n-1);
    cout<<n<<endl;
    int temp= arr[n-1];
    int j=n-2;
    while(j>=0 && arr[j]>temp){  
            arr[j+1]=arr[j];  
            j--;   
    }
    arr[j+1]=temp; 
}

int main()
{

    int arr[6]={8,4,1,5,9,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortArray(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
       
    return 0;
    
}