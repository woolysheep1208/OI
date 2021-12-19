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
#define dbg fprintf(stderr, "%s %d: ", __FUNCTION__, __LINE__)
#pragma GCC optimize("Ofast")

// Global Variables


void solve(int testcase) {
    // Implementation
    int h, w;
	cin >> h >> w;
	char a[h+1][w+1];
	for(int i=1; i<=h; i++) {
		for(int j=1; j<=w; j++) {
			cin >> a[i][j];
		}
	}
	bool dp[h+1][w+1];
	for(int i=1; i<=h; i++) {
		for(int j=1; j<=w; j++) {
			dp[i][j] = false;
		}
	}
	dp[1][1] = true;
	int ans=0;
	for(int i=1; i<=h; i++) {
		for(int j=1; j<=w; j++) {
			if(a[i][j+1]=='.' && dp[i][j]) {
				dp[i][j+1] = true;
			}
			if(a[i+1][j]=='.' && dp[i][j]) {
				dp[i+1][j] = true;
			}
		}
	}
	for(int i=1; i<=h; i++) {
		for(int j=1; j<=w; j++) {
			if(dp[i][j]) ans = max(ans, i+j-1);
		}
	}
	cout << ans << endl;
}
    
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    srand(time(NULL));
    int t=1;
//    cin >> t;
    for (int i=1; i<=t; i++) 
        solve(i);
}
