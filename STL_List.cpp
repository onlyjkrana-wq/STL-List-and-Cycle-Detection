#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 3, 4, 5};
    vector<int> v = {10, 20, 30, 40, 50};
    // l.clear(); // clear the list
    // l.resize(7,1); // resize the list to 7 elements with value 1
    // if (l.empty())
    // {
    //     cout << "empty" << endl;
    // }
    // else
    // {
    //     cout << "Not empty" << endl;
    // }

    // l.insert(next(l.begin(), 2), v.begin(),v.end()); // insert 10 at the 3rd position of the list
    // l.insert(next(l.begin(), 2), 10); // insert 10 at the 3rd position of the list
    // cout << *next(l.begin(), 2) << endl; // print the 3rd element of the list
    // l.erase(next(l.begin(), 2)); // erase the 3rd element of the list
    // l.erase(next(l.begin(), 2), next(l.begin(), 4)); // erase the 3rd to 5th elements of the list
    // replace(l.begin(), l.end(), 2, 100); // replace the 3rd element of the list with 100
    find(l.begin(), l.end(), 2) != l.end() ? cout << "Found" << endl : cout << "Not Found" << endl; // find the 3rd element of the list

    for (int it : l)
    {
        cout << it << endl; // print each element
    }
    return 0;
}