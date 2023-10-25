#include <iostream>
using namespace std;

void print(int *p){
    cout<<p<<endl;
    cout<<*p<<endl;
}

void update(int *p){
    // p=p+1;
    // cout<<"Inside function : "<<p<<endl;

    *p = *p+1;
}

int getSum(int arr[],int n){
    cout<<"Size : " <<sizeof(arr)<<endl; //4 not 40 
    //this is because behind the scene int arr[] whole array is not passed instead a pointer is passed
    //in BTS its "*arr" in place of "arr[]"

    int sum=0;
    for(int i=0; i<n; i++){
        sum +=arr[i];
    }
    return sum;
}

int main(){
    //POINTER WITH FUNCTION

    int value =5;
    int *p = &value;
    print(p);

    cout<<"before "<<p<<endl;
    update(p);
    cout<<"After "<<p<<endl;
    //both giving same answer no updation happened

    cout<<"before value "<<*p<<endl;
    update(p);
    cout<<"After value "<<*p<<endl;

    cout<<endl<<endl;
    //////////////
    int arr[6]={1,2,3,4,5,8};
    cout<<"Sum is "<<getSum(arr,6)<<endl;
    cout<<"Sum is "<<getSum(arr + 3, 3)<<endl; //starts from value 4(index 3)
    //this way we can pass a part of array only
    return 0;
}