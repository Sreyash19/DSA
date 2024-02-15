#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    // return a.second < b.second;

    //sort first in ascending and if first is same than sort second in descending
    if(a.first == b.first){ //we directly compared coz by default sorting is done on first in ascending order
        return a.second > b.second;
    }
}

int main()
{
    int n;
    cin>> n;
    vector<pair<int, int> > v;
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    cout<<endl;
    // cout<<"Sorted "<<endl;
    // //by default it sort according to first
    // sort(v.begin(), v.end());
    // for(int i=0; i<n; i++){
    //     cout<<v[i].first <<" "<<v[i].second<<endl;
    // }

    cout<<"Sorted Using Comparator"<<endl;
    //now to sort according to second 
    sort(v.begin(), v.end(), compare);
    for(int i=0; i<n; i++){
        cout<<v[i].first <<" "<<v[i].second<<endl;
    }
    return 0;
}