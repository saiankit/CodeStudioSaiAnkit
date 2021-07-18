#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cout << "Gi" << endl;
	int one = 0, two = 0, three = 0;
	string str; cin >> str;

	for (auto ch : str) {
		if (ch == '1') one++;
		else if (ch == '2') two++;
		else if (ch == '3') three++;
	}

	for (int i = 0 ; i < one; ++i) cout << '1' << "+";
	for (int i = 0 ; i < two; ++i) cout << '2' << "+";
	for (int i = 0 ; i < three - 1; ++i) cout << '3' << "+";

	if (three > 0)	cout << '3' << "\n";
}