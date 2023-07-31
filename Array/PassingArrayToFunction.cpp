#include <iostream>
using namespace std;

void printArray(int arr[]){
        cout<<"Elements of Array are: "<<endl;
        for(int i=0; i<sizeof(arr); i++){
            cout<<arr[i]<<endl;
        }
    }
int main(){

    int myarray[5]={7,8,6,1,4};
    printArray(myarray);
}
