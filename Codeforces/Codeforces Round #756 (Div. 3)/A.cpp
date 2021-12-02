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
    string s;
    cin >> s;
    int temp = s[s.size()-1] - '0';
    // even number
    if(temp%2==0) {
        cout << 0 << endl;
        return;
    }
    // all odd digits
    int arr[s.size()];
    for(int i=0; i<s.size(); i++) {
        arr[i] = s[i] - '0';
    }
    bool allOdd = true;
    for(int i=0; i<s.size(); i++) {
        if(arr[i]%2==0) {
            allOdd = false;
            break;
        }
    }
    if(allOdd) {
        cout << -1 << endl;
        return;
    }
    // 1 case
    int front = s[0] - '0';
    if(front%2==0) {
        cout << 1 << endl;
        return;
    }
   cout << 2 << endl;
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
 
/*
 
 
*/
