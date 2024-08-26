#include <bits/stdc++.h>
#define modVal 1000000007
using namespace std;

typedef pair<int,int> pi;
typedef vector<int> vi;

//Macros
#define REP(i,a,b) for(int i = a; i <= b; i++)


int main()
{
    //1. Always use long long (not even long) unless input
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

   /* % and / on -ve Integers
                        /               %
    -ve op -ve          +ve            -ve
    +ve op +ve          +ve            +ve
    -ve op +ve          -ve            -ve
    +ve op -ve          -ve            +ve
   
   */

   //Type cast: (int)double_i;
   //static_cast<double> int_i

    /* STL
    vector<int> vi  or    vector<vector<int>> vi
        .push_back(i)
        .pop_back()
        
    sort(v.begin(),v.end())
    
    iterator lower_bound(v.begin(),v.end(),val)
        log N
    */
    return 0;
}
