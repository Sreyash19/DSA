#include<iostream>
#include<cstring>
using namespace std;

class Hero{
    private: 
    int score;  
    public:
    int health;
    char level;
    char *name;
    static int timeToComplete;


    Hero(){
         cout<<" Default Constructor called  "<<endl;
         name = new char[100];
    }
    Hero(int health){
        // health = health;
        cout<<"this "<<this<<endl;
        this->health = health;
    } 
    Hero(int health, char level){
        // health = health;
        this->level = level;
        this->health = health;
    } 
    void print(){
        cout<<endl;
        cout<<"name "<<this->name<<endl;
        cout<<"score "<<this->score<<endl;  
        cout<<endl;

    }
    //copy constructor
    Hero(Hero& temp){  

        char *ch = new char[strlen(temp.name)+1];
        // ch = temp.name;
        strcpy(ch,temp.name); 
        this->name= ch;
        cout<<"copy constructor called"<<endl; 
    }
    //getter
    int getScore(){
        return score;
    }
    //setter
    void setScore(int s){
            score = s; 
    }

    void setName(char name[]){
        this->name = name;
    }

    //Destructor
    // ~Hero(){
    //     cout<<"Destructor called"<<endl; 
    // }

    static int random(){
        // cout<<this->health<<endl;  //this is not available
        // cout<<health<<endl;   //health is not static so cant access it in static functions
    
        cout<<"static function"<<endl;
        return timeToComplete;
    }
};
//Initialization of static
int Hero::timeToComplete=5;

int main()
{
    cout<< Hero::timeToComplete <<endl;
    cout<<Hero::random()<<endl;
    Hero a;
    cout<<a.timeToComplete<<endl;
    
    Hero b;
    b.timeToComplete = 10;
    cout<<b.timeToComplete<<endl;
    cout<<a.timeToComplete<<endl;
    return 0;
}