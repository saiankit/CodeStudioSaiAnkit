#include <bits/stdc++.h>
#include <iomanip>

typedef long long ll;
const int MOD = 1000000007;
#define endl "\n";
#define deb(x) cerr << #x << " is " << x << endl;
#define IOS ios:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
void solve() {

	int n; cin >> n;
	vector<int> arr(n);
	double sum = 0;
	int am = INT_MIN;
	for (int i = 0 ; i < n; ++i) {
		int a; cin >> a;
		arr.push_back(a);
		sum += a;
		if (a > am) {
			am = a;
		}
	}

	double fa = am;
	double fb = (sum - am) / (n - 1);

	cout << fixed << setprecision(9) << (fa + fb) << endl;

}
int main() {
	IOS;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// solve();
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}