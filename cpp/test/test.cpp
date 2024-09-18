#include <bits/stdc++.h>
#define modVal 1000000007
using namespace std;

typedef pair<int,int> pi;
typedef vector<int> vi;

//Macros
#define REP(i,a,b) for(int i = a; i <= b; i++)


void helper(vector<int>&nums, vector<vector<int>>& ans, vector<int> v, int curr, int lastNum)
{
    if(curr >= nums.size())
    {
        ans.push_back(v);
        return;
    }

    while(nums[curr] == lastNum && curr < nums.size())
    curr++;

    int x = nums[curr];
    while(nums[curr] == x && curr < nums.size())
    {
        helper(nums,ans,v,curr+1,lastNum);
        v.push_back(nums[curr]);
        lastNum = nums[curr];
        curr++;
    }
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    helper(nums,ans,{},0,INT_MIN);
    return ans;
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
    
   vector<int> a = {1,1,2};
   auto x = subsetsWithDup(a);
   for(auto y : x)
   {
        cout << "[" ;
        for(auto z : y)
        cout << z << " " ;
        cout << "] "; 
   }
   


    return 0;
}
