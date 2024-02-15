#include<iostream>
#include<queue>
using namespace std;

class compare{
    public:
        bool operator()(pair<int,int> a, pair<int,int> b){
            return a.second < b.second ;
        }
};

int main()
{
    priority_queue<int, vector<pair<int,int>>, compare> pq;

    pq.push({5,0});
    pq.push({4,1});
    pq.push({3,2});
    pq.push({3,10});
    pq.push({1,5});

    while(!pq.empty()){
        cout<<pq.top().first << " "<< pq.top().second<<endl;
        pq.pop();
    }
    return 0;
}