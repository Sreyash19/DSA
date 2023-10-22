#include <iostream>
using namespace std;

//Searching in 2d array  
bool isPresent(int arr[][4], int target, int row, int col){
    //int arr[][4] -> we need to atleast give col value else it will give error
     for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            if(arr[row][col]==target){
                return 1;
            }
        }
    }
    return 0;
}


int main(){
    int arr[3][4];
    //taking element ->row wise input
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cin>>arr[row][col];
        }
    }


    //taking element ->col wise input
    // for(int col=0; col<4; col++){
    //     for(int row=0; row<3; row++){
    //         cin>>arr[row][col];
    //     }
    // }

    //This hard coded values will be printed in row wise 
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}; 

    // int arr[3][4] = { {1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333} };
    
    
    //printing
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter element to search "<<endl;
    int target;
    cin>>target;

    if(isPresent(arr,target,3,4)){
        cout<<"Element found";
    }else{
        cout<<"Not found";
    }
}