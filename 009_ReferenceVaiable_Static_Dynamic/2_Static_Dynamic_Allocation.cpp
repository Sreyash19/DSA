#include <iostream>
using namespace std;

int getSum(int *arr,int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    /*
    int i=5;
    int arr[10];
    char...

    All this is static and use stack memory
    */

//    int n;
//    cin>>n;
//    int arr[n]; never do this (reason notebook)

   //Dynamic memory allocation happen in heap memory
//    char ch='q';
//    cout<<sizeof(ch)<<endl;
//    char *c = &ch;
//    cout<<sizeof(c)<<endl;

    // int *arr=new int[5];
    int n;
    cin>>n;
    int* arr= new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans=getSum(arr,n);
 
    cout<<"Answer is "<<ans<<endl;


    // case 1
    while(true){
        int i=5; //take only memory for single int for each iteration and it cleared when current interation ends 
        //for new iteration new memory for single int created again
    }

    // case 2
    //Khatarnak cheez
    while(true){
        int* ptr=new int;
        //when one iteration ends
        //"int* ptr" memory cleared as its in stack (static allocation)
        //But "new int" is in heap and heap memory is not cleared after each iteration 
        //for each iteration the heap memory get accumulated and program will crash after the memory gets full
    }
     
    // **********************************
    // Static memory released automatically
    // Heap memory dosent released automatically it should be done manually
    int *x = new int;
    delete x; // delete/release heap memory
    
    return 0;

}