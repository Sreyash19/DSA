#include <iostream>
using namespace std;

int main(){
    //POINTERS WITH CHAR

    int arr[5]={1,2,3,4,5};
    char ch[6] = "abcde";

    cout<<arr<<endl;
    cout<<ch<<endl;

    char *c = &ch[0];
    cout<<c<<endl; //abcde

    char temp='z';
    char *p = &temp;
    cout<<p<<endl; //starts from address of temp and goes till it finds null character
    //here its printing zabcde coz after z count found ch which consists abcde
    
    //Never do this coz no copy of value used directly pointed 
    //char *cptr = "abcde"; 
    return 0;
}