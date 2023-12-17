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
        // this->health = temp.health;
        // this->level = temp.level;
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
        // strcpy(this->name,name);
    }

    //DESTRUCTOR
    //It deallocated memory of object when object ends or goes out of scope
    ~Hero(){
        cout<<"Destructor called"<<endl; 
    }
};


int main()
{
    Hero a;
    //For static obj destructor is automatically called
    Hero *b = new Hero;
    delete b;
    //For dynamic obj destructor is called manually
   
    return 0;
}