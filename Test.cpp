#include <iostream>
#include <cstring>
using namespace std;
 
 
int main(){
//    char ch[]= "Sreyash";
//    char ch2[] = "Sreyash";
//    cout<<strlen(ch)<<endl;
//    cout<<strcmp(ch,ch2); 
    int n=4;
    // cout<<n&1; // error
    for(int col =0; col<n; col++){
        if(col&1){
            cout<<"ODD ";
            cout<<endl;
        }else{
            cout<<"even"<<endl;
        }
    }
    return 0;
}

 