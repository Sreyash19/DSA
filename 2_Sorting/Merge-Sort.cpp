#include <iostream>
using namespace std;

void merge(int arr[],int s,int e){
    int mid =(s+e)/2;
   
    int len1 = mid-s+1; //add 1 coz when mid-s, mid excluded so to add it +1
    int len2 = e-mid;
    
    //New arrays after splitting
    int *first = new int(len1); 
    int *second = new int(len2);

    //copy values in arrray
    int mainArrayIndex=s;
    for(int i=0; i<len1; i++){
        first[i]= arr[mainArrayIndex];
        mainArrayIndex++;
    }

     mainArrayIndex=mid+1;
    for(int i=0; i<len2; i++){
        second[i]= arr[mainArrayIndex];
        mainArrayIndex++;
    }

    //merge 2 sorted arrays
    int index1=0;
    int index2=0;
    mainArrayIndex=s;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex]=first[index1];
            mainArrayIndex++;
            index1++;
        }
        else{
            arr[mainArrayIndex]=second[index2];
            mainArrayIndex++;
            index2++;
        }
    }
    //When both array don't have same length 
    while(index1<len1){
        arr[mainArrayIndex]=first[index1];
        mainArrayIndex++;
        index1++;
    }
    while(index2<len2){
        arr[mainArrayIndex]=second[index2];
        mainArrayIndex++;
        index2++;
    }

}

void mergeSort(int arr[], int s, int e){
    // s => start of array, e=> End of array
    //base case
    if(s<e){//when start exceed end means array ends so return
        //   int mid =(s+e)/2;
        int mid= s+(e-s)/2;
       
        mergeSort(arr,s, mid); //left part sorting
        mergeSort(arr, mid+1, e); //right part sorting

        merge(arr,s,e); //merging   
    }
   
}

int main(){
     
    int arr[8]={2,5,1,6,9,5,7,11};
    int n=8;
    mergeSort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}

