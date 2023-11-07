#include<iostream>
using namespace std;
//When a function calls itself is called recursion
//Recursive function must have a base case and recursive relation
//Each base case must have return statement 
int factorial(int n){
    //base case -> if base case not present, it will call function recursively until memory gets full
    if(n==0){
        return 1;
    }
    // int smallerProblem = factorial(n-1);
    // int biggerProblem = n*smallerProblem;
    return  n*factorial(n-1);
}

int power(int n){
    if(n==0){
        return 1;
    }
    // int smallerProblem = power(n-1);
    // int biggerProblem = 2*smallerProblem;

    // return biggerProblem;
    return 2*power(n-1);
}

//Tail Recusion -> when recusive relation is at end 
void print1(int n){
    //base case
    if(n==0){
        return ;
    }
    //processing
    cout<<n<<endl;

    //recursive relation
    // cout<<"RR "<<n <<endl;
    print1(n-1);
     
}

//Head Recusion -> when recursive relation if above/before processing
void print2(int n){
    //base case
    if(n==0){
        return ;
    }
    //recursive relation
    
    print2(n-1);

    //processing
    cout<<n<<endl;  
}
int main()
{
    int n;
    cin>>n;
    cout<<endl;
    // int ans=factorial(n);
    // cout<<ans<<endl;

    // int ans2 = power(n);
    // cout<<ans2<<endl;

    print1(n); //print from n and goes till 1
    cout<<endl<<endl;
    print2(n); //print from 1 and goes till n
    
    return 0;
}