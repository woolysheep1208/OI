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
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> mp;
    for(int i=0; i<n-1; i++) {
        mp[s.substr(i, 2)]++;
    }
    pair<string, int> ans = {"", 0};
    for(int i=0; i<n-1; i++) {
        if(ans.ss<mp[s.substr(i, 2)]) {
            ans.ff = s.substr(i, 2);
            ans.ss = mp[s.substr(i, 2)];
        }
    }
    cout << ans.ff;
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
 
*/
