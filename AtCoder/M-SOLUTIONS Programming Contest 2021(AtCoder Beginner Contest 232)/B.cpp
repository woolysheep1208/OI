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
	string s, t;
	cin >> s >>  t;
	if(s==t) {
		cout << "Yes" << endl;
		return;
	}
	for(int i=1; i<=25; i++) {
		for(int j=0; j<s.size(); j++) {
			if(s[j]=='z') s[j] = 'a';
			else s[j]++;
		}
		if(s==t) {
			cout << "Yes" << endl;
			return;
		}
	}
	cout << "No" << endl;
}
    
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    srand(time(NULL));
    int t=1;
//   cin >> t;
    for (int i=1; i<=t; i++) 
        solve(i);
}
