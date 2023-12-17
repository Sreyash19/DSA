#include<iostream>
using namespace std;

class Hero{
    public:
    const int points;
    int score ;
    int health = 0;

    int setHealth(const int h){
        // h = h+health;  
        //Error cannot change h
    }

    //Const Member Function
    void scoreUpdate(int s) const{
            // score =s;
            //cannot change anything in this function
    }

    Hero(){

     }

    //List Initialization
    Hero(int i,int j, int k): score(i),health(j), points(k){
        cout<<"Score : "<<score<<endl;
        cout<<"Health : "<<health<<endl;
        cout<<"Points : "<<points<<endl;
    }
     

};

int main()
{
    Hero h1;
    h1.setHealth(5);
    h1.scoreUpdate(8);

    const Hero h2;
    cout<<h2.score<<endl;
    // h2.score = 20; 
    //cannot change as its const object

    Hero(5,8,14);
    return 0;


}