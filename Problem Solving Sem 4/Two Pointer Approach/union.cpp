#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int first[] = {5, 10, 15, 20, 25};
    int second[] = {50, 40, 30, 20, 10};
    int n = sizeof(first) / sizeof(first[0]);
    cout << "First array contains :";
    for (int i = 0; i < n; i++)
        cout << " " << first[i];
    cout << "\n";
    cout << "Second array contains :";
    for (int i = 0; i < n; i++)
        cout << " " << second[i];
    cout << "\n\n";
    vector<int> v(10);
    vector<int>::iterator it, st;
    sort(first, first + n);
    sort(second, second + n);
    it = set_union(first, first + n, second, second + n, v.begin());
    cout << "The union has " << (it - v.begin()) << " elements:\n";
    for (st = v.begin(); st != it; ++st)
        cout << ' ' << *st;
    cout << '\n';

    return 0;
}
