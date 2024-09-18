#include <bits/stdc++.h>
#define modVal 100000007
using namespace std;

//should be static or not be present in the class
bool sortCustom(pair<int,int> pt1, pair<int,int> pt2)
{
    if(pt1.second == 0 && pt2. second == 0)
    {
        return abs(pt1.first) < abs(pt2.first);
    }
    else if(pt1.second == 0 && pt2.second != 0)
    {
        return true;
    }
    else if(pt1.second != 0 && pt2.second == 0)
    {
        return false;
    }
    else
    {
        return pow(pt1.first,2) + pow(pt2.second,2) < pow(pt2.first,2) + pow(pt2.second,2);
    }
}

int main()
{
    vector<pair<int,int>> ar{ {5,0},{0,5},{1,0}};
    sort(ar.begin(),ar.end(),sortCustom);
    for(pair<int,int> a: ar)
    {
        cout<< a.first << " " << a.second << endl;
    }
    return 0;
}