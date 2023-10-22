#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    
    //Binary search
    cout<<"Finding 6-> "<<binary_search(v.begin(),v.end(),6)<<endl; 
    cout<<"Lower bound-> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Upper bound-> "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;


    int a=3;
    int b=5;
    cout<<"Max ->"<<max(a,b)<<endl;
    cout<<"Min ->"<<min(a,b)<<endl;

    swap(a,b);
    cout<<"a->"<<a<<endl;
    cout<<"b->"<<b<<endl;

    string abcd ="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"string-> "<<abcd<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After rotate: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }

    sort(v.begin(),v.end()); //based on intro sort it is combination of 3 sorts (Heap,quick,insertion sort)
}