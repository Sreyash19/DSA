#include <iostream>
using namespace std;


long long int sqrInteger(int n){
    int s=0;
    int e=n;
    long long int mid= s+(e-s)/2;
    long long int ans =-1;
    //long long int use coz while square=mid*mid it might happen for a large number of "mid" 
    //doing mid*mid can lead to exceed limit of integer 2^31;
    while(s<=e){
        long long int square=mid*mid;

        if(square==n){
            return mid;
        }
        if(square<n){
            ans=mid;   
            s=mid+1;        
            }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int floorSqrt(int n)
{
    // Write your code here.
    //Let n=36, we have to find square root of it
    //now its root with lie in range 0-36 (its root is 6 and it lies in that range)
    /*
    0-----------------36
    Use Binary search(Coz its sorted in ascending order)
    -> Now we find mid and compare the sqaure of mid with given number 
        if it's equal then we found the answer.
    -> If square of mid is less than number, we move to "right" of array as left of mid consists smaller values and those will eventually give less value itself
        and again find mid of right side array
    -> If square of mid is greater than number than move to "left" side of array

    */

    return sqrInteger(n);
     
}

double morePrecision(int n,int precision, int tempsol){
    double factor =1;
    double ans = tempsol;
    for(int i=0; i<precision; i++){
        factor = factor/10; //for more precision 1 become 0.1, 0.1->0.01 ... and so on
        for(double j=ans; j*j<n; j=j+factor){
            ans=j;
        }
    }
    return ans;

}
int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    int tempSol = sqrInteger(n);
    cout<< "Answer is "<< morePrecision(n,3,tempSol);
    return 0;
}