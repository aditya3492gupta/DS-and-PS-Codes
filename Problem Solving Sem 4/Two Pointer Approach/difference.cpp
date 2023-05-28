#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int first[] = {5, 10, 15, 20, 25};
    int second[] = {50, 40, 30, 20, 10};
    int n = sizeof(first) / sizeof(first[0]);
    vector<int> v2(5);
    vector<int>::iterator it, ls;
    sort(first, first + 5);
    sort(second, second + 5);
    cout << "First array :";
    for (int i = 0; i < n; i++)
        cout << " " << first[i];
    cout << "\n";
    cout << "Second array :";
    for (int i = 0; i < n; i++)
        cout << " " << second[i];
    cout << "\n\n";
    ls = set_difference(first, first + 5, second, second + 5, v2.begin());
    cout << "Using default comparison, \n";
    cout << "The difference has " << (ls - v2.begin()) << " elements :";
    for (it = v2.begin(); it < ls; ++it)
        cout << " " << *it;
    cout << "\n";
    return 0;
}
