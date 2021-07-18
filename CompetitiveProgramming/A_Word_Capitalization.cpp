#include <bits/stdc++.h>
typedef long long ll;
const int mod = 1000000007;
#define endl "\n";
#define deb(x) cerr << #x << " is " << x << endl;
#define IOS ios:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;


int main() {
	IOS;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string str; cin >> str;

	if (str[0] >= 'a') str[0] -= 32;

	cout << str << endl;

}