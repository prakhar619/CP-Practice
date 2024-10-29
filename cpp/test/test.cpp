#include <bits/stdc++.h>
#define modVal 1000000007
using namespace std;

typedef pair<int,int> pi;
typedef vector<int> vi;

//Macros
#define REP(i,a,b) for(int i = a; i <= b; i++)


// C++ Program to illustrate how to implement runtime
// function overriding using virtual function
#include <iostream>
using namespace std;

class Base {
public:
    // Declare the function as virtual to allow overriding
    // in derived classes
    virtual void display()
    {
        cout << "Display method of Base class" << endl;
    }

    // Virtual destructor to ensure proper cleanup of
    // derived class objects
    virtual ~Base() {}
};

class Derived : public Base {
public:
    // Override the display method
    void display()
    {
        cout << "Display method of Derived class" << endl;
    }

    void call()
    {
        cout << "HELO"<< endl;
    }
};


int main()
{
    //1. Always use long unless input
    //2. Before running consider all cases and control flow including border cases. You should know all cases of control flow.
    //3. Test aleast not given base cases and given cases befor submittion
    //4. cerr your check values

    //5. If you're stuck on an approach, think of another drastically different approach.
    //6. Set vector size but avoid vector default value for non primary data types
    //7. Check the final code for silly mistakes and typos
    //8. Different compiler deals differently with floating point; avoid floating point or avoid == with floating

    /* Modular Maths
    1. (a+b) mod m = (a mod m + b mod m) mod m
    2. Negative mod m = Negative    => if(x%m) output = x%m +x
    */

    /* FASTER INPUT OUTPUT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    */

    /* To read the whole line from input
    getline(cin,s);
    */

    /* INPUT  AND OUTPUT VIA FILE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    */

    /*      Max         Min
    Int     2.14e9      -2.14e9
    Uint    4.29e9      0
    Long    9.22e18     -9.22e18
    */
    Base* basePtr;
    Derived derivedObj;

    // Point base class pointer to derived class object
    basePtr = &derivedObj;

    // Call the display function
    // This will call the display method of the Derived
    // class due to the virtual function mechanism
    basePtr->display();

    return 0;


    return 0;
}
