/*
J. Lucky Substring
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

One day Petya was delivered a string s, containing only digits. He needs to find a string that

represents a lucky number without leading zeroes,
is not empty,
is contained in s as a substring the maximum number of times.
Among all the strings for which the three conditions given above are fulfilled, Petya only needs the lexicographically minimum one. Find this string for Petya.

Input
The single line contains a non-empty string s whose length can range from 1 to 50, inclusive. The string only contains digits. The string can contain leading zeroes.

Output
In the only line print the answer to Petya's problem. If the sought string does not exist, print "-1" (without quotes).

Examples
inputCopy
047
outputCopy
4
inputCopy
16
outputCopy
-1
inputCopy
472747
outputCopy
7
Note
The lexicographical comparison of strings is performed by the < operator in the modern programming languages. String x is lexicographically less than string y either if x is a prefix of y, or exists such i (1 ≤ i ≤ min(|x|, |y|)), that xi < yi and for any j (1 ≤ j < i) xj = yj. Here |a| denotes the length of string a.

In the first sample three conditions are fulfilled for strings "4", "7" and "47". The lexicographically minimum one is "4".

In the second sample s has no substrings which are lucky numbers.

In the third sample the three conditions are only fulfilled for string "7".
*/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

int main()
{

    ll i,fr=0,svn=0,nai=0;
    string s;
    cin>>s;

    for(i=0;i<s.size();i++)
    {
        if(s[i]=='4') fr++;
        else if(s[i]=='7') svn++;
        else nai++;
    }

    if(nai==s.size()) cout<<"-1"<<endl;
    else if(fr>=svn) cout<<"4"<<endl;
    else cout<<"7"<<endl;



return 0;
}