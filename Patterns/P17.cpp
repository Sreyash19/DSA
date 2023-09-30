#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
     
    while(row<=n){
        int col=1;
        int formula= (n+1)-row;
        while(col<=formula){
            cout<<col;
            col=col+1;
        }

        int star=row-1;
        while(star){
            cout<<"*";
            star=star-1;;
        }
        
        int star2=row-1;
        while(star2){
            cout<<"*";
            star2=star2-1;
        }
         
        while (formula) {
            cout << formula;
            formula--;
        }

        cout<<endl;
        row=row+1;
}
}