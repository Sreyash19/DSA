#include<iostream>
 #include <cstring>
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
};

int main()
{
    Hero hero1;
    hero1.setScore(100);
    char name[8] = "sreyash";
    hero1.setName(name);

    hero1.print();

    //use default copy costructor
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'g'; //in case of shallow copy this change will also reflect in hero2
    hero1.print();

    hero2.print();
    //Shallow copy -> default copy constructor
    //Deep Copy  -> user defined copy constructor
    hero1 = hero2; //copy assignment operator
    hero2.print();
    return 0;
}