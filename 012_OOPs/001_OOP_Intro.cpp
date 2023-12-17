#include<iostream>
#include "HeroClass.cpp"  //Import class from another file
using namespace std;

 class Hero1{
    // ACCESS Modifiers
    //Private : access only inside class (By default all members are private)
    //Public : accessible from anywhere in program
    //Protected : NOt accessible from outside class but possible from inherited class
     //properties 

    private: 
    int score;  
    public:
    int health;
    char level;

    void print(){
        cout<<score<<endl;
    }

    //getter
    int getScore(){
        return score;
    }
    //setter
    void setScore(int s){

            score = s;
        
    }
 };

int main()
{
    //object of Hero class
    Hero h1; 
    Hero1 ramesh;
    cout<<"Si ze of ramesh "<<sizeof(ramesh)<<endl;
    ramesh.health = 70;
    ramesh.level = 'A';
    // ramesh.score = 100;
    ramesh.setScore(100);
    cout<<"Ramesh score "<<ramesh.getScore()<<endl;
    cout<<"Health is "<< ramesh.health<<endl;
    cout<<"Level is "<< ramesh.level<<endl;
    cout<<"Score is "<< ramesh.getScore()<<endl;
    
    // cout<<"Size: "<<sizeof(h1)<<endl;
    //For empty class it will give size =1 (This is to keep track of class)
    
    
    return 0;
}