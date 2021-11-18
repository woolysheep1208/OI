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
	int a, b, c;
	cin >> a >> b >> c;
	if (a<b && b>c && a%2==0 && b%2==0 && c%2==0) {
        cout << "sad";
    }
	else if(a>=b || b<=c) {
		cout << "not a hill";
		if(a%2==1 || b%2==1 || c%2==1) {
			cout << " and one of them is odd";
		}
	}
	else cout << "one of them is odd";
}
	
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	srand(time(NULL));
    solve();
}
 
/*
 
 
*/
