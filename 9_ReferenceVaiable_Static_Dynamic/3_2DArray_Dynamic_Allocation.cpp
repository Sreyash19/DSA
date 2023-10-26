#include<iostream>
using namespace std;
//2D array using dynamic memory allocation
int main(){
/*
    int n;
    cin>>n;
    //creation of 2d array (square matrix 2*2 , 3*3 .....)
    int** arr = new int*[n]; //create an dynamic array which depict our rows
    //now using loop each element(row) in array above a new array created using loop
    for(int i=0; i<n; i++){
        arr[i] = new int[n];
    }
*/

//remember to clean memory (heap)

    //with rows and columns different
    int row;
    cin>>row;
    int col;
    cin>>col;
    int** arr =  new int*[row];
    for(int i=0; i<row; i++){
        arr[i]=new int[col];
    }

    //input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    
    //printing output
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //releasing memory
    //releases memory of the array created for each row
    for(int i=0; i<row; i++){
        delete [] arr[i];
    }

    delete []arr; //release the array first created (rows)
    return 0;
}