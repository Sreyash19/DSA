#include<iostream>
#include<map>
#include<unordered_map>

//This is a MAP INTRO  unordered_map
using namespace std;
int main()
{
    //creation
    unordered_map<string,int> m; //keep key/values in unorder manner
    // map<string,int> m; //keeps key/values in order the way we inserted 

    //insertion 1
    pair<string, int> p = make_pair("sreyash", 3);
    m.insert(p);

    //insertion 2
    pair<string, int> pair2("kunkekar",2);
    m.insert(pair2);

    //insertion 3
    m["mera"] = 1; //when insertion first time creation happens

    m["mera"] = 4; // when again do insertion updation happens
    //Corresponding to every Key there will be only one value

    cout<<m["mera"]<<endl;
    cout<<m.at("sreyash")<<endl;
    // cout<<m.at("unknownKEY")<<endl; //gives error
    // cout<<m["unknownKEY"]<<endl;     //gives 0 as it creates an entry 0 corresponding to key
   
    //BUT
    cout<<m["unknownKEY"]<<endl;
    cout<<m.at("unknownKEY")<<endl; 
    //Now both gives 0 (first one creates entry of 0 and second one reads that entry)
    
    //SIZE
    cout<<m.size()<<endl;

    //to check presence of a key
    cout<< m.count("bro")<<endl; //if key present gives 1 else 0
    

    //erase
    m.erase("sreyash");
    cout<<m.size()<<endl;

    for(auto i:m){
        cout<< i.first<< " "<<i.second<<endl;
    }

    //ITERATOR
    unordered_map<string, int> :: iterator it = m.begin();
    // map<string, int> :: iterator it = m.begin();

    while(it != m.end()){
        cout<< it->first <<" "<<it->second<<endl;
        it++;
    }
    return 0;
}