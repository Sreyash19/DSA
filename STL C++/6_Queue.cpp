#include<iostream>
#include<queue>

using namespace std;

int main(){
   queue<string> q;

   q.push("FZS");
   q.push("R1");
   q.push("GSA");

   cout<<"Size Before pop "<<q.size()<<endl; 
   cout<<"First element "<<q.front()<<endl;
   q.pop();
   cout<<"First element "<<q.front()<<endl;
   cout<<"Size after pop "<<q.size()<<endl; 
}