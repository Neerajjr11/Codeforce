//B. Omkar and Infinity Clock




#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <unordered_map>
#include <bitset>

using namespace std;

typedef long long ll;
const int maxn = 2e5 + 7;
const int mod = 998244353;

int a[maxn];

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputc.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    int T; scanf("%d", &T);
    while (T--) {
        ll n, k; scanf("%lld%lld", &n, &k);
        int mx = -1e9;
        for (int i = 1; i <= n; i++) {
            scanf("%d", &a[i]);
            mx = max(mx, a[i]);
        }
        k--;
        for (int i = 1; i <= n; i++) {
            a[i] = mx - a[i];
        }
        mx = -1e9;
        for (int i = 1; i <= n; i++) {
            mx = max(mx, a[i]);
        }
        for (int i = 1; i <= n; i++) {
            if (k & 1) {
                a[i] = mx - a[i];
            }
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}
