#include <iostream>
using namespace std;
int main() {
	
	string s;
	cin >> s;
	
	string s2;
	for(int i=s.size()-1;i>=0;i--) s2 += s[i];
	
	if( s == s2 ) {
		cout << "yes\n";
	}
	else {
		cout << "no\n";
	}
	
	
	return 0;
}
