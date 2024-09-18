#include <bits/stdc++.h>
using namespace std;

struct pair_order
{
    bool operator()(pair<int,int> &a, pair<int,int> &b) const
    {
        return a.first* a.first + a.second* a.second > b.first* b.first + b.second * b.second;
    }
};

// bool pair_order(pair<int,int> a, pair<int,int> b)
// {
//     if( a.first*a.first + a.second* a.second > b.first*b.first + b.second*b.second)
//     return true;
//     return false;
// }
int main()
{
    priority_queue<pair<int,int>, vector<pair<int,int>>, pair_order> pq;

    pq.push({1,2});
    pq.push({3,4});
    pq.push({0,1});
    pq.push({1,0});

    while(!pq.empty())
    {
        pair<int,int> i = pq.top(); pq.pop();
        cout << i.first << " " << i.second << endl;
    }
    return 1;
}