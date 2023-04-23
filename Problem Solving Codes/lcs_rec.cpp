#include <bits/stdc++.h>
using namespace std;
int lcs_rec(string a, string b, int n, int m)
{
    if (n == 0 or m == 0)
        return 0;
    else if (a[n - 1] == b[m - 1])
        return 1 + lcs_rec(a, b, n - 1, m - 1);
    else
        return max(lcs_rec(a, b, n - 1, m), lcs_rec(a, b, n, m - 1));
}
int main()
{
    cout << "Enter the string\n";
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    int maxi = lcs_rec(a, b, n, m);
    cout << "The maximum size is\t" << maxi;
    return 0;
}