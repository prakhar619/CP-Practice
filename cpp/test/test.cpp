#include <bits/stdc++.h>
#define modVal 1000000007
using namespace std;

typedef pair<int,int> pi;
typedef vector<int> vi;

//Macros
#define REP(i,a,b) for(int i = a; i <= b; i++)

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
   int n,m,k;
   cin >> n; cin >> m; cin >> k;
   vi ps(n,0);
   REP(i,0,n-1)
   {
        cin >> ps[i];
   }

    int it = n - m + 1;
    vector<long long> sums(it,0);
    REP(i,0,m-1)
    {
        sums[0] += ps[i];
    }
    for(int i = 1; i + m -1 < ps.size(); i++)
    {
        sums[i] = sums[i-1] - ps[i-1] + ps[i+m-1];
    }
    REP(i,0,sums.size()-1)
    cout << sums[i] << ":";
    sort(sums.begin(),sums.end(),greater<long long>());
    long long ans = 0;
    REP(i,0,k-1)
    {
        ans += sums[i];
    }
    cout << ans;
    return 0;
}
