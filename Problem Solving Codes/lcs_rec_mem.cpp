#include <bits/stdc++.h>
using namespace std;
int static dp[1001][1001];
int lcs_rec_mem(string a, string b, int n, int m)
{
    if (n == 0 or m == 0)
        return 0;
    if (a[n - 1] == b[m - 1])
        return (dp[n][m] = 1 + lcs_rec_mem(a, b, n - 1, m - 1));
    if (dp[n][m] != -1)
        return dp[n][m];
    else
        return (dp[n][m] = max(lcs_rec_mem(a, b, n - 1, m), lcs_rec_mem(a, b, n, m - 1)));
}
int main()
{
    memset(dp, -1, sizeof(dp));
    cout
        << "Enter the string\n";
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    int maxi = lcs_rec_mem(a, b, n, m);
    cout << "The maximum size is\t" << maxi;
    return 0;
}