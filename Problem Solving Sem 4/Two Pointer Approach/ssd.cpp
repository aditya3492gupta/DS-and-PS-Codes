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
        std::cout << " " << first[i];
    cout << "\n";
    cout << "Second array contains :";
    for (int i = 0; i < n; i++)
        std::cout << " " << second[i];
    cout << "\n\n";
    vector<int> v(10);
    vector<int>::iterator it, st;
    sort(first, first + 5);
    sort(second, second + 5);
    it = set_symmetric_difference(first, first + 5, second, second + 5, v.begin());
    cout << "The symmetric difference has " << (it - v.begin()) << " elements:\n";
    for (st = v.begin(); st != it; ++st)
        cout << ' ' << *st;
    cout << '\n';
    return 0;
}