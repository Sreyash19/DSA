#include <iostream>
#include <deque>
//Insertion and Deletion at both end 
//Dynamic  
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";
    }
    // d.pop_back();
    // d.pop_front();
    cout<<endl; 
    cout<<"First index element "<<d.at(1)<<endl; 
    cout<<"Front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;

    cout<<"Before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1); //it takes range to be erased
    cout<<"After erase "<<d.size()<<endl;

}