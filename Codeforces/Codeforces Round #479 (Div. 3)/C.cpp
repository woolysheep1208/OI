// Virtual
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
 
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
#define vt vector
#define ff first
#define ss second
#define pb push_back
#define all(x) x.begin(), x.end()
 
#define dbgfl fprintf(stderr, "%s %d\n", __FUNCTION__, __LINE__)
#define dbg(...) cout << "[" << #__VA_ARGS__ << "]: "; cout << to_string(__VA_ARGS__) << endl
 
// Global Variables
 
 
void solve() {
    // Implementation
    int n, k;
    cin >> n >> k;
    ll a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    if(k==0) {
        if(a[0]==1) {
            cout << -1 << endl;
            return;
        }
        cout << a[0]-1 << endl;
        return;
    }
    ll ans = a[k-1];
    int cnt=0;
    for(int i=0; i<n; i++) {
        if(a[i]<=ans) cnt++;
    }
    if(ans<1 || ans>1e9) {
        cout << -1 << endl;
        return;
    }
    if(cnt==k) cout << ans << endl;
    else cout << -1 << endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    srand(time(NULL));
    int t=1;
//    cin >> t;
	while(t--) solve();
}
 
/*
7 4
1 3 3 5 7 10 20
*/
