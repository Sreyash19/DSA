#include<iostream>
#include<map>

using namespace std;

int main(){
//  map<keyType,ValueType> name;
    map<int,string> m;

    m[1]="FZS";
    m[13]="GSA";
    m[2]="R1";

    m.insert({5,"S1000RR"});
    cout<<"Before erase "<<endl;
    for(auto i:m){
        //gives sorted output
        cout<<i.first<<" "<<i.second<<endl;
    }
    //For unordered Map gives random output
    cout<<endl;
    cout<<"Finding 13-> "<<m.count(13)<<endl;
    cout<<"Finding -13-> "<<m.count(-13)<<endl;
    cout<<endl;
    m.erase(13);
     cout<<"After erase "<<endl;
    for(auto i:m){
        //gives sorted output
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it=m.find(5);
    for(auto i=it; i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

}