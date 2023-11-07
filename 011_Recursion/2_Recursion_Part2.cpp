#include<iostream>
#include<string>
using namespace std;

void reachHome(int src,int dest){
    cout<<"Source "<<src<<" destination "<<dest <<endl;
    //base case
    if(src==dest){
        cout<<"Pahuch gaya ghar"<<endl;
        return ;
    }
    //processing
    src++;
    //recursive call
    reachHome(src,dest);
}

//N-STAIRS
int countDistinctWays(int nStairs) {
    //base case
    if(nStairs<0){
        return 0;
    }
    if(nStairs==0){
        return 1;  //Oth stair pe the vapas ussi pe aa gaye to hue 1 step
        //Thats why return 1
    }
    //recursive call
    int ans=countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
    
    return ans;

    //WILL GIVE TLE for large value and for that we need to use DP
}
 
//SAY DIGIT 
// input -> 412
// output -> Four One Two
void sayDigit(int n,string arr[]){

    if(n==0){
        return ;
    }
    //processing
    int digit = n % 10;
    n = n / 10;
    // cout<<arr[digit]<<" ";  //ulta print karega ye 

    // recursive call
    sayDigit(n,arr);

    cout<<arr[digit]<<" ";
}
int main()
{
    //You have to reach dest starting from src
    // int dest=10;
    // int src=1;
    // cout<<endl;
    // reachHome(src,dest);

    // cout<<countDistinctWays(5)<<endl;

    int n;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<endl;
    sayDigit(n,arr);
    cout<<endl;
    return 0;
}