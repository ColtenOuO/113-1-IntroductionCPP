#include <iostream>
using namespace std;

int f(int n) {
	if( n >= 101 ) return n - 10;
	return f(f(n+11));
}
int main() {
	
	int n;
	bool tmp = false;
	while( cin >> n ) {
		if( n == 0 ) break;
		if( tmp != false ) cout << "\n";
		
		tmp = true;
		cout << "f91(" << n << ") = " << f(n);
	}
	
	return 0;
}
