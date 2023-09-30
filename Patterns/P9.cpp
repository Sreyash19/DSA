#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row =1;

    while(row<=n){
        int col=1;
        while(col<=row){
            // i+j-1
            /* To map 1 with A
                i+j-1 +A-1 = 1+A-1
                A+i(row) +j(col) -2 = A
            */
            char ch = ('A'+row+col-2);
            cout<<ch;
            col = col+1;
        }
        cout<<endl;
        row=row+1;
    }
}