#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ull unsigned long long
#define ld long double
#define pii pair<int, int>
#define pll pair<ll int, ll int>
#define vi vector<int>
#define vl vector<ll int>
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
	ll n, m;
	cin >> n >> m;
	ll a[n], b[m];
	for(int i=0; i<n; i++)
		cin >> a[i];
	for(int i=0; i<m; i++)
		cin >> b[i];
	sort(a, a+n);
	sort(b, b+m);
	int ptr1=0, ptr2=0, ans=0;
	while(ptr1<n && ptr2<m) {
		if(a[ptr1]>b[ptr2]) {
			ans++;
			ptr2++;
		}
		ptr1++;
	}
	cout << ans << endl;
}
 
	
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	srand(time(NULL));
	solve();
}
 
/*
[123, 124, 125]
[122]
^
^
*/
