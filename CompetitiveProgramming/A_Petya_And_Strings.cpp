#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s1, s2; cin >> s1 >> s2;

	for (int i = 0 ; i < s1.size(); ++i) {
		// Convert Uppercase to lowercase

		if (s1[i] < 97) s1[i] += 32;
		if (s2[i] < 97) s2[i] += 32;

	}

	int res = 0;

	for (int i = 0 ; i < s1.size(); ++i)  {
		if (s1[i] > s2[i]) {
			res = 1;
			break;
		} else if (s1[i] < s2[i]) {
			res = -1;
			break;
		}
	}

	cout << res << endl;
}