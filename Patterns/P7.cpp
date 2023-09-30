#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row =1;
    char ch = 'A';
    while(row<=n){
        int col = 1;
        while(col<=row){
            // char ch2 = {'A'+row-1} can also use this and print it 
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        ch=ch+1;
        row=row+1;
    }
}