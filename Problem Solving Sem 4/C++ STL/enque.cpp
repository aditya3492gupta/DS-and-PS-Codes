#include <bits/stdc++.h>
using namespace std;
void print(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    cout << "------------\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    queue<int> q;
    q.push(6);
    q.push(5);
    q.push(4);
    print(q);
    return 0;
}