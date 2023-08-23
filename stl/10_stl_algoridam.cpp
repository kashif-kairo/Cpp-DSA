#include <iostream>

#include <bits/stdc++.h> //or #include<algorithm>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "Finding 6--> " << binary_search(v.begin(), v.end(), 6) << endl;
    cout << "lower bound --> " << lower_bound(v.begin(), v.end(), 1) - v.begin() << endl;
    cout << "upper bound --> " << upper_bound(v.begin(), v.end(), 7) - v.begin() << endl;

    int a = 3;
    int b = 5;
    cout << "min --> " << min(a, b) << endl;
    ;
    cout << "max --> " << max(a, b) << endl;
    ;

    string ab = "abcd";
    reverse(ab.begin(), ab.end());
    cout << "strings--> " << ab << endl;
}