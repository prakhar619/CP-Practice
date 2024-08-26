#include <bits/stdc++.h>
#define modVal 1000000007
using namespace std;

typedef pair<int,int> pi;
typedef vector<int> vi;

//Macros
#define REP(i,a,b) for(int i = a; i <= b; i++)


string minWindow(string s, string t) {
        unordered_map<char,int> charFreq;
        unordered_map<char,int> loop_charFreq;

        for(char c : t)
        charFreq[c]++;

        int unmatch = 0;
        for(pair<char,int> p : charFreq)
        unmatch++;
        
        int l = 0, r = 0;
        int minL = 0, minR= INT_MAX;


        loop_charFreq[s[0]]++;
        if(loop_charFreq[s[0]] == charFreq[s[0]])
        unmatch--;

        while(r < s.length())
        {
            r++;
            if(charFreq[s[r]] != 0)
            {
                loop_charFreq[s[r]]++;
                if(loop_charFreq[s[r]] == charFreq[s[r]])
                    unmatch--;
            }

            while(l < r && (charFreq[s[l]] == 0 || loop_charFreq[s[l]] > charFreq[s[l]]))
            {
                if(loop_charFreq[s[l]] > charFreq[s[l]])
                loop_charFreq[s[l]]--;
                l++;
            }
            
            if(unmatch == 0)
            {
                if(minR - minL > r - l)
                {
                    minR = r;
                    minL = l;
                }
            }

        }
        return (unmatch == 0 ? s.substr(minL,minR) : "");
}
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
    cout << minWindow("OUZODYXAZV","XYZ");
    return 0;
}
