#include <iostream>
using namespace std;

int a[26];

int main() {
	
	string s;
	while( cin >> s ) {
		for(int i=0;i<26;i++) a[i] = 0;
		string s2;
		for(int i=0;i<s.size();i++) {
			if( s[i] >= 'A' && s[i] <= 'Z' ) s2 += s[i];
			if( s[i] >= 'a' && s[i] <= 'z' ) s2 += s[i];
		}
		
		for(int i=0;i<s2.size();i++) {
			if( s2[i] >= 'a' && s2[i] <= 'z' ) a[s2[i]-'a']++;
			if( s2[i] >= 'A' && s2[i] <= 'Z' ) a[s2[i]-'A']++;
		}
		
		int cnt = 0;
		for(int i=0;i<26;i++) {
			if( a[i] % 2 == 1 ) cnt++;
		}
		
		if( cnt > 1 ) cout << "no...\n";
		else cout << "yes !\n";
	}
	
	
	return 0;
}
