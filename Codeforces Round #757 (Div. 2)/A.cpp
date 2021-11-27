#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ull unsigned long long
#define ld long double
#define pii pair<int, int>
#define pll pair<ll int, ll int>
#define vt vector
#define ff first
#define ss second
#define pb push_back
#define pres(n,k) fixed << setprecision(k) << n
#define debug(n) "DEBUGGING:" << n
#define upzero(n) if(n<0) n=0
#pragma GCC optimize("Ofast")
 
// Global Variables
 
 
void solve() {
    // Implementation
    ll n, l, r, k;
    cin >> n >> l >> r >> k;
    ll a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a,a+n);
    int ans=0, cost=0;
    for(int i=0; i<n; i++) {
        if(a[i]>=l && a[i]<=r) {
            if(cost+a[i]<=k) {
                cost+=a[i];
            }
            else break;
            ans++;
        }
    }
    cout << ans << endl;
}
    
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    srand(time(NULL));
    int t;
    cin >> t;
    while(t--)
        solve();
}
