#include<iostream>
using namespace std;

 class Hero{
    private: 
    int score;  
    public:
    int health;
    char level;

    //Uncomment this and error at line 54 will go
    Hero(){
         cout<<" Default Constructor called  "<<endl;
     }

    //Paramerterised Constructor
    //"this" holds the address of current object ,
    //  here our current object is Ramesh so this->health refer to health variable in ramesh object class 
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
        cout<<"health "<<this->health<<endl;
        cout<<"level "<<this->level<<endl;
         
    }
// COPY CONSTRUCTOR
//We passed values as pass by reference because when we pass by value a copy will be created, so temp creates a copy of parameter passed which will call the copy constructor again 
// then it goes to temp and again it calls tha constructor and it results in never ending loop
//So to avoid this we use reference    
    Hero(Hero& temp){ //when we create our own copy constructor, the constructor created automatically by compiler will be deleted/removed
        cout<<"copy constructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
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
    //object created 
    // cout<<"Hi"<<endl;
    Hero ramesh(10);
    // cout<<"Hello"<<endl;
    cout<<"Address of ramesh "<<&ramesh<<endl;
    
    //dynamic
    // Hero *h = new Hero;
    //This will give error as when objetc is created a default constructor is created by compiler
    //But as we already created a parameterized constructor that default one gets removed and it will not exist anymore
    //As for this object we are not passing any value to any para constructor it needs a deafult one but it does not exist now so it will give error
    //If we create a default constructor by our self this error will not appear
 
    Hero temp(100,'A');
    cout<<"Health "<<temp.health<<endl;
    cout<<"Level "<<temp.level<<endl;

    //Copy Constructor
    cout<<"COPY CONSTRUCTOR"<<endl;
    Hero suresh(70,'B');
    suresh.print();

    Hero ritesh(suresh); 
    ritesh.print();
    //Below two represent above statement
    // ritesh.health = suresh.health
    // ritesh.level = suresh.level

    return 0;
}