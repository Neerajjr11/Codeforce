/*
I. Double-ended Strings
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given the strings a and b, consisting of lowercase Latin letters. You can do any number of the following operations in any order:

if |a|>0 (the length of the string a is greater than zero), delete the first character of the string a, that is, replace a with a2a3…an;
if |a|>0, delete the last character of the string a, that is, replace a with a1a2…an−1;
if |b|>0 (the length of the string b is greater than zero), delete the first character of the string b, that is, replace b with b2b3…bn;
if |b|>0, delete the last character of the string b, that is, replace b with b1b2…bn−1.
Note that after each of the operations, the string a or b may become empty.

For example, if a="hello" and b="icpc", then you can apply the following sequence of operations:

delete the first character of the string a ⇒ a="ello" and b="icpc";
delete the first character of the string b ⇒ a="ello" and b="cpc";
delete the first character of the string b ⇒ a="ello" and b="pc";
delete the last character of the string a ⇒ a="ell" and b="pc";
delete the last character of the string b ⇒ a="ell" and b="p".
For the given strings a and b, find the minimum number of operations for which you can make the strings a and b equal. Note that empty strings are also equal.

Input
The first line contains a single integer t (1≤t≤100). Then t test cases follow.

The first line of each test case contains the string a (1≤|a|≤20), consisting of lowercase Latin letters.

The second line of each test case contains the string b (1≤|b|≤20), consisting of lowercase Latin letters.

Output
For each test case, output the minimum number of operations that can make the strings a and b equal.

Example
inputCopy
5
a
a
abcd
bc
hello
codeforces
hello
helo
dhjakjsnasjhfksafasd
adjsnasjhfksvdafdser
outputCopy
0
2
13
3
20
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string a,b;         
int t,la,lb,maxn;   
int main(){
    
    
    cin>>t;
    while(t--){
    
    
        cin>>a>>b;
        maxn = 0;
        la = a.length(),lb = b.length();
        for(int l = 1;l <= la && l <= lb;++l){
    
        
            for(int i = 0;i < la - l + 1;++i){
    
         
                for(int j = 0;j < lb - l + 1;++j){
    
 
                    bool flag = true;
                    for(int notea = i,noteb = j;notea <= i + l - 1;++notea,++noteb)
                        if(a[notea] != b[noteb]){
    
    
                            flag = false;break;
                        }
                    if(flag)            
                        maxn = max(maxn,l);
                }
            }
        }
        cout<<la + lb - maxn * 2<<"\n";
    }
    return 0;
}