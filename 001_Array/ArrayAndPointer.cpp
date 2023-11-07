#include <iostream>
using namespace std;

int main(){
    int arr[5]={10,20,30,40,50};
    int* ptr = &arr[0];
    cout<<"Address stored in array name "<<arr<<endl;
    cout<<"Address of 1st array element "<<&arr[0]<<endl;
     cout<<"Array elements :";
     for(int i=0; i<5; i++){
        cout<<*ptr++<<" ";
     }
}