#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m1, m2, sub = 0, sec = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m1 >> m2;
        if (m1 > m2)
            sub = m1 - m2;
        else
            sub = m2 - m1;
        if (m1 == 0 || m2 == 0)
        {
            cout << sub << " " << "0" << endl;

        }
        else
        {   sec = sub % 2;

            cout << sub << " " << sec << endl;
        }
    }


}