#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.emplace_back(5);
    for (auto i : v)
        cout << i << endl;
    cout << "-------------------\n";
    vector<int>::iterator it;
    it = v.begin();
    v.erase(it);
    for (auto i : v)
        cout << i << endl;
    v.pop_back();
    cout << "-----------------\n";
    for (auto i : v)
        cout << i << endl;
    v.clear();
    for (auto i : v)
        cout << i << endl;
    cout << v.max_size();
    return 0;
}