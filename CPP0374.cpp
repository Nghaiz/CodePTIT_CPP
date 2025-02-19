#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	string s; 
    cin >> s;
	int res = 0;
	for (int i = 1; i < s.length() - 1; i++) {
		if (s[i - 1] == 'A' && s[i] == 'B' && s[i + 1] == 'A') {
			s[i] = 'A';
			res++;
		}
		if (s[i - 1] == 'B' && s[i] == 'A' && s[i + 1] == 'B') {
			s[i] = 'B';
			res++;
		}
	}

	if (s[0] == 'B' && s[1] == 'A') {
		s[0] = 'A'; 
        res++;
	}
	if (s[s.length() - 2] == 'A' && s[s.length() - 1] == 'B') {
		s[s.length() - 1] = 'A'; res++;
	}
	for (int i = 0; i < s.length() - 1; i++){
		if (s[i] != s[i + 1]) {
			res++; 
		}
    }
	if (s[0] == 'A' && s[s.length() - 1] == 'B') res++;
	if (s[0] == 'B' && s[s.length() - 1] == 'B') res++;
	cout << res;
    return 0;
}