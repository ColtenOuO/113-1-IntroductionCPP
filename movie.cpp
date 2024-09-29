#include <iostream>
#include <algorithm>
using namespace std;

struct Movie{
	int l,r;
};

Movie a[200001];

bool cmp(Movie a,Movie b) {
	return a.r < b.r;
}
int main() {
	int n;
	cin >> n;
	for(int i=0;i<n;i++) {
		cin >> a[i].l >> a[i].r;
	}
	
	sort(a,a+n,cmp);
	int ans = 0, now = 1;
	
	for(int i=0;i<n;i++) {
		if( now <= a[i].l ) {
			now = a[i].r;
			ans++;
		}
	}
	
	cout << ans << "\n";
}
