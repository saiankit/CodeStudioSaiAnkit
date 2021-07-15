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
	int one = 0 , two = 0, three = 0;

	for (char ch : str) {
		if (ch == '1') one++;
		else if (ch == '2') two++;
		else if (ch == '3') three++;
	}

	string res = "";
	for (int i = 0 ; i < one; ++i) res += "1+";
	for (int i = 0 ; i < two; ++i) res += "2+";
	for (int i = 0 ; i < three; ++i) res += "3+";

	for (int i = 0; i < res.size() - 1; ++i) cout << res[i];

	cout << endl;
}