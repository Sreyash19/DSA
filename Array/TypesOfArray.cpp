#include <iostream>
using namespace std;
int main(){
    //One Dimensional Array => also known as 1D array consists of one dimensions
    int arr[5];//One D array

    //Multidimensional Array
    // => 2D Array - has exactly two dimensions. They can be visualized in the form of rows and columns organized in a two-dimensional plane.
    // arrayName[row][column]
    int TwoDArray[2][3] = { 10, 20, 30, 40, 50, 60 };
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout<<TwoDArray[i][j]<<" ";
        }
        cout<<endl;
    }

    // => 3D Array - has three dimensions, It can be visualized as a collection of 2D arrays stacked on top of each other to create the third dimension.
    // array_name [size1] [size2] [size3];
    // array_name [z/number of matrices or tables] [y/rows] [x/columns];
    int ThreeDArray[4][3][2]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
     cout<<"3D Array : "<<endl;
     cout<<"\n";
     for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                cout<<(ThreeDArray[i][j][k])<<" ";
            }
            cout<<endl;
        }
        cout<<"\n \n";
    }


}

