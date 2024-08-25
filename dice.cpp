#include <iostream>
using namespace std;

int a[3],n,x,ans = 0;

void solve(int c,int sum) {
	if( c == n ) {
		if( sum <= x ) ans++;
		return;
	}
	
	solve(c+1,sum+a[0]);
	solve(c+1,sum+a[1]);
	solve(c+1,sum+a[2]);
	
	return;
}
int main() {
	
	cin >> n >> a[0] >> a[1] >> a[2] >> x;
	solve(0,0);
	
	cout << ans << "\n";
	
	return 0;
}
