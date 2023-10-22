#include <iostream>
#include <vector>

using namespace std;
int main(){
    //Vector is dynamic and it doubles its space when it gets full
    //that why when below we added 3 in vector its capacity became 4

    vector<int> v; //its capacity is 0 at this point
    //when initialized vector size is zero
    cout<<"capacity-> "<<v.capacity()<<endl;
    //capacity -> total space or for how many elements the space is allocated
    //size-> elements present currently

    v.push_back(1);
    cout<<"capacity-> "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity-> "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity-> "<<v.capacity()<<endl;
    cout<<"Size->"<<v.size()<<endl;
    
    //Print elements
    cout<<"Printing elements"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    v.pop_back(); // pop element
    v.clear(); //clear vector but the capacity remain same     
    cout<<endl;
     //Another way to initialize vector;
    vector<int> b(5,1);
    //5-> is the size of vector 
    //1-> initialize vector with 1, so all elements will be 1 initially
    cout<<"NEW vector"<<endl;
    for(int i:b){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> last(b); 
    //New vector created with name "last" and all the elements of vector b are copied in this vector
    cout<<"Print last "<<endl;
    for(int i:last){
        cout<<i<<" ";
    } 

    return 0;
}