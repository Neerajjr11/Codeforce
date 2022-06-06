/*
N. Vasya and Books
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vasya has got n books, numbered from 1 to n, arranged in a stack. The topmost book has number a1, the next one — a2, and so on. The book at the bottom of the stack has number an. All numbers are distinct.

Vasya wants to move all the books to his backpack in n steps. During i-th step he wants to move the book number bi into his backpack. If the book with number bi is in the stack, he takes this book and all the books above the book bi, and puts them into the backpack; otherwise he does nothing and begins the next step. For example, if books are arranged in the order [1,2,3] (book 1 is the topmost), and Vasya moves the books in the order [2,1,3], then during the first step he will move two books (1 and 2), during the second step he will do nothing (since book 1 is already in the backpack), and during the third step — one book (the book number 3). Note that b1,b2,…,bn are distinct.

Help Vasya! Tell him the number of books he will put into his backpack during each step.

Input
The first line contains one integer n (1≤n≤2⋅105) — the number of books in the stack.

The second line contains n integers a1,a2,…,an (1≤ai≤n) denoting the stack of books.

The third line contains n integers b1,b2,…,bn (1≤bi≤n) denoting the steps Vasya is going to perform.

All numbers a1…an are distinct, the same goes for b1…bn.

Output
Print n integers. The i-th of them should be equal to the number of books Vasya moves to his backpack during the i-th step.

Examples
inputCopy
3
1 2 3
2 1 3
outputCopy
2 0 1 
inputCopy
5
3 1 4 2 5
4 5 1 3 2
outputCopy
3 2 0 0 0 
inputCopy
6
6 5 4 3 2 1
6 5 3 4 2 1
outputCopy
1 1 2 0 1 1 
Note
The first example is described in the statement.

In the second example, during the first step Vasya will move the books [3,1,4]. After that only books 2 and 5 remain in the stack (2 is above 5). During the second step Vasya will take the books 2 and 5. After that the stack becomes empty, so during next steps Vasya won't move any books.
*/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long
#define fr(i,n)        for(int i=0;i<n;i++)
ll ok[200015],b[200015];
int main()
{
    ll n,i,k,l,ans,m;
    cin>>n;
    ll  p;
    queue<ll>q;

    fr(i,n)
    {
        cin>>p;
        q.push( p);
    }
    fr(i,n) scanf("%lld",&b[i]);
    fr(i,n)
    {
        cin>>m;
        ans=0;
        if(ok[b[i] ])
        {
            ans=0;
            cout<<ans<<' ';continue;
        }

        else{
        while(true)
        {
            ll g=q.front();
            ok[g]=1;
            ans++;
            q.pop();
            if(b[i]==g)break;
        }
        cout<<ans<<' ';
    }
  }
}