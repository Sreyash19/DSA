#include <iostream>
using namespace std;

 
int partition(int arr[], int s, int e) {
    int pivot = arr[s];
    int cnt = 0;

    for (int i = s + 1; i <= e; i++) {
        if (arr[i] <= pivot) { //count number of elements less than pivot
            cnt++;
        }
    }

    //place pivot at the right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]); //swap both elements

    // left and right part
    int i = s, j = e; //left and right pointers of the array
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int start, int end){
    //base case
    if(start<=end){
      
        int p = partition(arr, start, end);
        quickSort(arr,start, p-1);//left part of arr/ pivot
        quickSort(arr,p+1, end);//right part of arr/pivot

}
}

int main(){
     
    int arr[7]={8,7,6,1,0,9,2};
    int n=7;
    quickSort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
