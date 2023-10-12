#include<iostream>
#include<set>

using namespace std;

int main(){
    //set stores unique elements 
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    //returns element in sorted order
    for(auto i: s){
        cout<<i<<endl;
    }

    set<int>::iterator it =s.begin();
    it++;
    cout<<"after erase "<<endl;
    // s.erase(s.begin());
    s.erase(it );
      for(auto i: s){
        cout<<i<<endl;
    }

    cout<<"5 is present or not "<<s.count(5)<<endl;
    cout<<"-5 is present or not "<<s.count(-5)<<endl;

    set<int>::iterator itr = s.find(5);
    //when we use find we get response as reference of that value
    cout<<"Value present at itr-> "<<*it<<endl;

    for(auto it=itr; it!=s.end(); it++){
        cout<<*it<<' ';
    }cout<<endl;
}