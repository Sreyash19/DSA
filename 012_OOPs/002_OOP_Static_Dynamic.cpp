#include<iostream>
using namespace std;

 class Hero{
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
    //static allocation
    Hero a;

    cout<<"Health "<<a.health<<endl;
    cout<<"Score "<<a.getScore()<<endl;


    //Dynamic allocation
    Hero *b = new Hero;
    b->health = 70;
    b->setScore(100);
    cout<<"Health "<<(*b).health<<endl;
    cout<<"Score "<<(*b).getScore()<<endl;
    //            OR
    cout<<"Health "<<b->health<<endl;
    cout<<"Score "<<b->getScore()<<endl;

    return 0;
}