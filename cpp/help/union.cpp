#include <bits/stdc++.h>
using namespace std;

union BITSS
{
    int num;
    bitset<32> bitt;
    //Automatic Default constructor not present in union
    BITSS()
    {}
};

int main()
{
    union BITSS obj;
    obj.num = {4};
    cout << obj.num << endl;
    cout << obj.bitt << endl;

    union BITSS obj2;
    obj.bitt = bitset<32>(string("10000000"));
    cout << obj.num << endl;
    cout << obj.bitt << endl;

    return 1;
}