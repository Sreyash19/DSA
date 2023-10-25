#include<iostream> 
using namespace std;

int main(){
    //Pointers with int array
   /* 
    int arr[10] = {2,5,6};
    int arr2[10] = {23,122,41,67};
    cout<<"Address of first memory block is : "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Address of first memory block using & is : "<<&arr[0]<<endl;
    
    cout<<"4th "<<*arr<<endl;  //2
    cout<<"5th "<<*arr+1<<endl; //3
    cout<<"6th "<<*(arr+1)<<endl; //5
    cout<<"7th "<<(*arr)+1<<endl; //3
    
    cout<<"First "<<arr2[2]<<endl;
    cout<<"Second "<<*(arr2+2)<<endl; //we move 2 blocks (int take 4bits for one block)
    
    ///////////////////////////////////
    int i=3;
    cout<<"New way "<<i[arr2]<<endl; //67
    */

   /*
    int temp[10]={1,2};
    cout<<"Size of temp : "<<sizeof(temp)<<endl;
    cout<<"1st: "<<sizeof(*temp)<<endl;
    cout<<"2nd : "<<sizeof(&temp)<<endl;
    int *ptr = &temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl; //8 (my compiler gives 4 as its depend on system) 
    cout<<sizeof(&ptr)<<endl; //8
    */

/*
   int a[20] = {1,2,3,5};
   cout<<"--> " <<&a[0]<<endl;
   cout<<&a<<endl;
   cout<<a<<endl<<endl;

    cout<<"Pointer "<<endl;
   int *p = &a[0];
   cout<<p<<endl;
   cout<<*p<<endl;
   cout<<"--> "<<&p<<endl;
*/

int arr[10];
//arr=arr+1; //error

    int *ptr = &arr[0];
    ptr=ptr+1;
    cout<<ptr<<endl;
    return 0;
}