#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	
	string s;
	cin >> s;
	
	char c;
	cin >> c;
	
	int p = 0;
	
	for(int i=0;i<n;i++) {
		if( s[i] == 'P' ) p = i;
	}
	
	if( c == 'L' ) s[p-1] = 'P';
	else s[p+1] = 'P';
	
	s[p] = '.';
	
	cout << s << "\n";
	return 0;
}
