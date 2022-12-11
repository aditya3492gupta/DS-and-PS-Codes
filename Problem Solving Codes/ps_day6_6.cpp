#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cout << "Enter the string one" << endl;
    cin >> s1;
    cout << "Enter the string two" << endl;
    cin >> s2;
    int count1[26] = {0}, count2[26] = {0}, i;
    for (i = 0; s1[i] != '\0'; i++)
        count1[s1[i] - 'a']++;
    for (i = 0; s2[i] != '\0'; i++)
        count2[s2[i] - 'a']++;
    int error = 0;
    cout << "Character needs to gets deleted to make the string anagram are" << endl;
    for (int i = 0; i < 26; i++)
        error += abs(count1[i] - count2[i]);
    cout << error;

    return 0;
}