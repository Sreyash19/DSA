// Friend Class Ans Friend Function

#include <iostream>
using namespace std;

class GFG;
class geekClass{
    public:
        void memberFunction(GFG& obj);
};
//above we did to implement  Friend Function in another class
//we defined the classes first then we initialized it 

class GFG {
private:
	int private_variable;

protected:
	int protected_variable;

public:
	GFG()
	{
		private_variable = 10;
		protected_variable = 99;
	}

	// friend class declaration
	friend class F;

    //friend function (global function)
    friend void friendFunction(GFG& obj);

    //friend function in another class
    friend void geekClass :: memberFunction(GFG&);
};

// Here, class F is declared as a
// friend inside class GFG. Therefore,
// F is a friend of class GFG. Class F
// can access the private members of
// class GFG.
class F {
public:
	void display(GFG& t)
	{
		cout << "The value of Private Variable = "<< t.private_variable << endl;
		cout << "The value of Protected Variable = "<< t.protected_variable<<endl;
	}
};

//Friend function
void friendFunction(GFG& obj){
    cout<<"Private "<< obj.private_variable <<endl;
    cout<<"Public " << obj.protected_variable <<endl;
}

//Friend function in side a class
void geekClass :: memberFunction(GFG& obj){
        cout<<"From geekClass"<<endl;
        cout<<"Private "<<obj.private_variable<<endl;
        cout<<"Protected "<<obj.protected_variable<<endl;
}



// Driver code
int main()
{
	GFG g;
	F fri;
	fri.display(g);

    //friend function call
    cout<<"Calling friend function "<<endl;
    friendFunction(g);

    cout<<"Function in another class "<<endl;
    geekClass gk;
    gk.memberFunction(g);
	return 0;
}
