#include <iostream>
using namespace std;

int main() {
	
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	
	string s3 = s1, s4 = s2;
	for(int i=0;i<s3.size();i++) {
		if( s3[i] >= 'A' && s3[i] <= 'Z' ) {
			s3[i] += ( 'a' - 'A' );
		}
	}
	for(int i=0;i<s4.size();i++) {
		if( s4[i] >= 'A' && s4[i] <= 'Z' ) {
			s4[i] += ( 'a' - 'A' );
		}
	}
	
	if( s3 == "jill" && s4 == "xiplus" ) {
		cout << "Hello, Sister!\n";
		cout << "Hi, Sister!\n";
	}
	else if( s3 == "xiplus" && s4 == "jill" ) {
		cout << "Hello, Sister!\n";
		cout << "Hi, Sister!\n";
	}
	else {
		cout << "Hello, " << s2 << "!\n";
		cout << "Hi, " << s1 << "!\n";
	}
	
	return 0;
}
