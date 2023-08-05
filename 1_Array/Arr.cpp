//An array is a collection of items of same data type stored at contiguous memory locations. 
#include <iostream>
using namespace std;
int main(){

int arr[5];        // This array will store integer type element
//char stringArray[10];    // This array will store char type element
//float floatArray[20];  // This array will store float type element

int firstArray[5]={5,9,6,4,8}; //arr initialization with fixed size
int b[] ={56,84,156,486,456,45,456,}; //arr initialization without fixed size
// Arr initialization using for loop
float arrNew[5];
    for (int i = 0; i < 5; i++) {
        arrNew[i] = (float)i * 2.1;
    }
cout<<"Arr initialization using for loop "<<arrNew<<endl;
//Accessing element from an array
cout<<firstArray[1]<<endl; //This will show us the element at index 1 in array named "firstArray"
cout<<b[4]<<endl;

//Updating array
int secondArray[8]={2,7,8,9,6,5,4,3};
cout<<"Element before updation "<<secondArray[2]<<endl;
secondArray[2]=0; //This will update the value at index 2 in array firstArray
cout<<"Element after updation "<<secondArray[2]<<endl;
    
//Traversing Array
for(int i=0; i<8;i++){
    cout<<secondArray[i]<<endl;
}


    return 0;
}