#include<iostream>
#include<map>
#include<unordered_map>

//For more refer first file 001 in 018_HashMaps folder
using namespace std;
int main()
{
//Declaring umap to be of  
// <string, int> type key  
// will be of STRING type  
// and mapped VALUE will 
// be of int type 
unordered_map<string, int> umap; 
  
// inserting values by using [] operator 
umap["GeeksforGeeks"] = 10; 
umap["Practice"] = 20; 
umap["Contribute"] = 30; 
  
umap.insert({"Sreyash", 100});
umap.insert({{"Sreyash", 100}, {"Kunkekar", 980}  });

// Traversing an unordered map 
for (auto x : umap){ 
    cout << x.first << " " << x.second << endl; 
}

//accessing
cout<<umap.at("Practice")<<endl;
cout<<umap["Practice"]<<endl;

//updation
umap.at("Practice") = 45;
umap["Sreyash"] = 200 ;

cout<<umap["Practice"]<<endl;
cout<<umap["Sreyash"]<<endl<<endl;


//erase 
umap.erase("Practice");
for (auto x : umap){ 
    cout << x.first << " " << x.second << endl; 
}
return 0;
}