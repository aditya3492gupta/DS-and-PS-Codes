#include <bits/stdc++.h>
using namespace std;
int static dp[100][100];
int lcs_dp(string a, string b, int n, int m)
{
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            if (i == 0 or j == 0)
                dp[i][j] = 0;
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            if (a[i - 1] == b[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[n][m];
}

int main()
{
    cout << "Enter the string\n";
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    int maxi = lcs_dp(a, b, n, m);
    cout << "The maximum size is\t" << maxi;
    return 0;
}