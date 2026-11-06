#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 5, 4, 5, 3};
    // l.remove(5); 
    // l.sort(); 
    // l.sort(greater<int>()); 
    // l.unique();
     l.reverse();
    //cout << l.front() << endl;
    //cout << l.back() << endl;
    // cout << *next(l.begin(),1);

    for (auto i : l)
    {
        cout << i << endl;
    }
    return 0;
}