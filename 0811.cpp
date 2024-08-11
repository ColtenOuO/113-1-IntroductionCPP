#include <iostream>
#include <sstream>
using namespace std;

int main() {
	
	string s1,s2;
	cin >> s1 >> s2;
	
	if( s1.size() > s2.size() ) cout << "1\n";
	else if( s2.size() > s1.size() ) cout << "2\n";
	else {
		if( s1 > s2 ) cout << "1\n";
		else cout << "2\n";
	}
	
	return 0;
}
