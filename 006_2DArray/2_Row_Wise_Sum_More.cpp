#include <iostream>
using namespace std;


//Row Wise Sum
void printSum(int arr[][4], int row, int col){
 cout<<"Printing sum "<<endl;
for(int row=0; row<3; row++){
    int sum=0;
    for(int col=0; col<4; col++){
        sum +=arr[row][col];
    }
    cout<<sum<<" ";
    }
}

//Column wise sum
void printSumCol(int arr[][4], int row, int col){
 cout<<"Printing Col sum "<<endl;
for(int col=0; col<4; col++) {
        int sum = 0;
        for(int row=0; row<3; row++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }

    cout << endl;
}

int largestRowSum(int arr[][4], int row, int col){
    // int maxi= INT_MIN;
    int maxi= 0;
    int rowIndex = -1;
    for(int row=0; row<3; row++){
        int sum=0;
        for(int col=0; col<4; col++){
        sum +=arr[row][col];
            }
        if(sum>maxi){
            maxi=sum;
            rowIndex = row;
        }
    }
    cout<<"The maximum sum is "<<maxi<<endl;
    return rowIndex;
}

int main (){
int arr[3][4];
    cout<<"Enter the elements "<<endl;
    //taking element ->row wise input
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cin>>arr[row][col];
        }
    }
    cout<<"Printing elements "<<endl;
    //printing
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    // printSum(arr,3,4);
    // cout<<endl;
    // printSumCol(arr,3,4);
    // int ansIndex = largestRowSum(arr,3,4);
    // cout<<"Index with max row sum -> "<<ansIndex;

    return 0;
}
// for(){
//     if(i&1){
//         its odd number
//     }else{
//         its even
//     }
// }

// *****What is i&1, what is does*****

//The & operator in C++ is the bitwise AND operator. When you apply the & operator to two numbers in binary, 
// it performs a bitwise AND operation on each pair of corresponding bits. The result is 1 only if both bits being compared are 1; otherwise, it's 0.

// So, when you use col & 1, you are performing a bitwise AND operation between the binary representation of col and 1. Here's a simple example:

// Let's consider the values of col during the loop iterations:
// When col is 0, col in binary is 0000, and 1 in binary is 0001. When you perform col & 1, you get 0000, which is 0. Since 0 is considered "false" in a Boolean context, the code inside the else block will execute.

// When col is 1, col in binary is 0001, and 1 in binary is still 0001. So, col & 1 is 0001, which is non-zero (true). Therefore, the code inside the if block will execute.

// When col is 2, col in binary is 0010, and 1 in binary is 0001. col & 1 results in 0000, which is 0, and the else block will execute.

// When col is 3, col in binary is 0011, and 1 in binary is still 0001. So, col & 1 is 0001, which is non-zero (true), and the if block will execute.