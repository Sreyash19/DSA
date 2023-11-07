#include<iostream>
#include<string>
using namespace std;

void reverseString(string &str, int i, int j){
    //without & (string &str) change will not reflect in main
    //base case
    if(i>j){
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;

    reverseString(str,i,j);
}

bool palindrome(string &str,int i,int j){
    //base case
    if(i>j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }
    else{
        //recursive call
        return palindrome(str,i+1,j-1);
         
    }
    


}

int main()
{
    // string name = "sreyash";
    string name = "aabbaa";
    int n=name.length()-1;
    // reverseString(name, 0, n );
    // cout<<name<<endl;
    
    bool ans = palindrome(name , 0, n);
    if(ans){
        cout<<"Its Palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}