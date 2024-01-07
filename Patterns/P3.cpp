#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int row =1;
    while(row<=n){
        int col =1;
        while(col<=n){
            //As characters an be represnetd in ASCII when we do this addition the ASCII value changes thus resulting new character of that new ASCII value
            //As ASCII of A is 65 when added 1 it becomes 66 which is ASCII of B
            char ch = 'A' + row-1;
            cout<<ch;
            col = col +1; 
        }
        cout<<endl;
        row=row+1;
    }

    return 0;
}