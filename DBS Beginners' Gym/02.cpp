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
	int x, y;
	cin >> x >> y;
	cout << (x+y) + x*x -2*x*y << endl;
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
