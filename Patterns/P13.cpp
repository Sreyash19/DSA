#include <iostream>
using namespace std;
//not working fix it
int main(){
    int n;
    cin>>n;
    int row =1;
    int count = n;
    while(row<=n){
         
        int space=row;
        while(space){
            cout<<" . ";
             space=space-1;
        }
         int col = 1;
        while(col<=count){
            cout<<"*";
            col=col+1;
         }
         count=count-1;
        cout<<endl;
        row=row+1;
         }


}