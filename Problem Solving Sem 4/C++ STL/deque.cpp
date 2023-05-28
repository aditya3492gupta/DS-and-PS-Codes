#include <bits/stdc++.h>
using namespace std;
void print(deque<int> d)
{
    for (auto i : d)
        cout << i << endl;
    cout << "----------\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    deque<int> d;
    d.push_back(5);
    d.push_back(4);
    d.push_front(6);
    print(d);
    d.pop_front();
    print(d);
    d.pop_back();
    print(d);
    cout << d.max_size();
    return 0;
}