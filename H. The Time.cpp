/*
H. The Time
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given the current time in 24-hour format hh:mm. Find and print the time after a minutes.

Note that you should find only the time after a minutes, see the examples to clarify the problem statement.

You can read more about 24-hour format here https://en.wikipedia.org/wiki/24-hour_clock.

Input
The first line contains the current time in the format hh:mm (0 ≤ hh < 24, 0 ≤ mm < 60). The hours and the minutes are given with two digits (the hours or the minutes less than 10 are given with the leading zeroes).

The second line contains integer a (0 ≤ a ≤ 104) — the number of the minutes passed.

Output
The only line should contain the time after a minutes in the format described in the input. Note that you should print exactly two digits for the hours and the minutes (add leading zeroes to the numbers if needed).

See the examples to check the input/output format.

Examples
inputCopy
23:59
10
outputCopy
00:09
inputCopy
20:20
121
outputCopy
22:21
inputCopy
10:10
0
outputCopy
10:10
*/
#include <bits/stdc++.h>
using namespace std;
   

void findTime(string T, int K)
{
   
   
    int minutes = ((T[0] - '0')
                       * 10
                   + T[1] - '0')
                      * 60
                  + ((T[3] - '0')
                         * 10
                     + T[4] - '0');
   
    
    minutes += K;

    int hour = (minutes / 60) % 24;
   
    int min = minutes % 60;
   
    
    if (hour < 10) {
        cout << 0 << hour << ":";
    }
    else {
        cout << hour << ":";
    }
   
    
    if (min < 10) {
        cout << 0 << min;
    }
    else {
        cout << min;
    }
}
int main()
{
    string A;
    cin>>A;
    int a;
    cin>>a;
    findTime(A,a);
}