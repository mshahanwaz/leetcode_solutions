#include <bits/stdc++.h>
using namespace std;

bool isInterleave(string s1, string s2, string s3) {
	int p = 0, q = 0, r = 0;
    bool isFound = false;
    while(r < s3.length()) {
        isFound = false;
        if(p < s1.length() && s1[p] == s3[r]) {
            isFound = true;
			cout << "Found for p\n";
            p++, r++;
        }
        if(q < s2.length() && r < s3.length() && s2[q] == s3[r]) {
            isFound = true;
			cout << "Found for q\n";
            q++, r++;
        }
		cout << p << ' ' << q << ' ' << r << endl;
        if(!isFound) break;
    }
    return (r == s3.length());
}       

void solve() {
	string s1, s2, s3; cin >> s1 >> s2 >> s3;
	if(isInterleave(s1, s2, s3)) cout << "true";
	else cout << "false";
	cout << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}

