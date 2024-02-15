#include<iostream>
#include<queue>
using namespace std;

//INSERTION,  DELETION,  HEAPIFY, HEAPSORT

class Heap{
    public:
        int arr[100];
        int size ;

        Heap(){
            arr[0] = -1;
            size = 0;
        }

        void insert(int val){
            size= size+1; //we start from index 1
            int index = size;
            arr[index] = val;

            while(index > 1){
                int parent = index/2; // formula to find parent

                if(arr[parent] < arr[index]){
                    swap(arr[parent], arr[index]);
                    index = parent;
                }else{
                    return;
                }
            }


        }

        //at 0th index in array we are not putting anything keeping it empty
        void print(){
            for(int i = 1; i<=size; i++){
                cout<<arr[i]<<" ";
            }cout<<endl;
        }

        //Deletion
        void deleteFromHeap(){
            if(size==0){
                cout<<"nothing to delete "<<endl;
                return ;
            }

            arr[1] = arr[size];
            size--;

            //take root node to its correct position
            int i =1;
            while(i<size){
                int leftIndex = 2*i;
                int rightIndex = 2*i+1;

                if(leftIndex < size && arr[i] < arr[leftIndex] ){
                    swap(arr[i], arr[leftIndex]);
                    i = leftIndex;
                }
                else if(rightIndex < size && arr[i] < arr[rightIndex] ){
                    swap(arr[i], arr[rightIndex]);
                }
                else{
                    return ;
                }

            }
        }

};

void Heapify(int arr[], int n , int i){
    int largest  = i;
    int left = 2*i;
    int right = 2*i+1;

    //left < n or right < n => we do this to check it is in bound or not
    if(left <= n && arr[largest] < arr[left]){ 
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest], arr[i]);
        Heapify(arr, n , largest); 
    }

}

//Heap Sort
void heapSort(int arr[], int n){
    int size = n;

    while(size > 1){
        //step1 : swap
        swap(arr[size], arr[1]);
        size--;

        //step 2
        Heapify(arr,size,1);

    }
}


int main()
{
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deleteFromHeap();
    h.print();
    cout<<endl<<endl;
    //we go from back to front or leaf to root
    int arr[6] = {-1,54, 53, 52, 55, 50};
    int n = 5;
    cout<<"Printing array before Heapify "<<endl;
    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    //Heap creation
    for(int i = n/2; i>0; i--){
        Heapify(arr, n, i);
    }

    cout<<"Printing array after heapify "<<endl;
    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


    //heap sort
    heapSort(arr, n);
    
    cout<<"Printing sorted array "<<endl;
    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    cout<<endl<<endl;

    cout<<"Priority queue"<<endl;

    //max-heap
    priority_queue<int> pq;

    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout<<"element on top "<<pq.top()<<endl;
    pq.pop();
    cout<<"element on top "<<pq.top()<<endl;
    cout<<"Size is "<<pq.size()<<endl;

    if(pq.empty()){
        cout<<"pq is empty"<<endl;
    }else{
        cout<<"pq is not empty"<<endl;
    }

    cout<<endl;

    //min heap
    cout<<"Min Heap "<<endl;
    priority_queue<int, vector<int>, greater<int>> minheap;

    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);
    cout<<"element on top "<<minheap.top()<<endl;
    minheap.pop();
    cout<<"element on top "<<minheap.top()<<endl;
    cout<<"Size is "<<minheap.size()<<endl;

    if(minheap.empty()){
        cout<<"pq is empty"<<endl;
    }else{
        cout<<"pq is not empty"<<endl;
    }


    return 0;
}