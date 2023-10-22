#include <iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        //Let ch = B
        // ch-A => B-A = 1 then 1+a=> b so this is how we convert upper case to lower case
        //For Lower to upper case => (ch - a + A)
        return temp;
    }
}

bool checkPalindrome(char a[], int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        if(toLowerCase(a[s]) != toLowerCase(a[e]))
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}


int getLength(char name[]){
int count = 0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

char getMaxOccCharacter(string s){
    //array of alphabets where a points 0th index ... and z->25th
    int arr[26] = {0}; 

    //create an array of count of characters
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        //lowercase
        int number=0;
        if(ch>= 'a' && ch<= 'z'){
            number=ch-'a';     //ex-> d-a => 3 , so at 3rd index value updates
        }else{ //uppercase
        number=ch-'A';
        }
        arr[number]++;
    }

    //find max occ character
    int maxi=-1;
    int ans=0;
    for (int i=0; i<26; i++)  
    {
        if(maxi<arr[i]){
            ans=i;
            maxi= arr[i];
        }
         maxi=max(maxi,arr[i]);
    }
    
    char finalAns = 'a'+ans;
    return finalAns;
}

int main(){

    // Character array
    // char name[20];
    // cout<<"Enter your name: "<<endl;
    // cin>>name; // let say we give input SREYASH
    //It will store one character at one index
    //S->0 , R->1, E->2 .... and rest will be assigned null character '10' 
    //Null character ASCII is 0 and used as terminator and tell where the string ends

    // name[2]= '\0'; //Put null character at 2th index
    // cout<<" Your Name is ";
    // cout<<name<<endl;
    //Input -> Sreyash, Output->Sreyash
    //Input -> Sreyash Kunkekar, Output->Sreyash
    // int len = getLength(name);
    // cout<<"Length "<<len<<endl;

    // cout<<name<<endl;
    // cout<<"Palindrome or Not: "<< checkPalindrome(name, len)<<endl;
     
    // cout<<"CHARACTER is "<<toLowerCase('b')<<endl; 
    // cout<<"CHARACTER is "<<toLowerCase('C')<<endl; 

    string s;
    cin>>s;
    cout<<getMaxOccCharacter(s)<<endl;

    return 0;
}