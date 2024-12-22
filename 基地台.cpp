#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main(void)
{
	ios_base::sync_with_stdio(false);
	
	cin.tie(0);
	
	int n,k;
	
	vector <int> a;
	
	cin >> n >> k;
	
	for(int i=0;i<n;i++)
	{
		int input;
		
		cin >> input;
		
		a.emplace_back(input);
	}
	
	sort(a.begin(),a.end());
	
	int l = 0,r = ( a[n-1] - a[0] ) / k + 1;
	
	int ans = 3e9;
	
	while( l < r )
	{
		int mid = ( l + r ) / 2;
		
		int c = 1;
		
		int now = a[0] + mid;
		
		int u = 1;
		
		for(int i=1;i<n;i++)
		{
			if( a[i] <= now ) continue;
			
			else
			{
				u++;
				
				now = a[i] + mid;
			}
		}
		
		if( u <= k )
		{
			r = mid;
			
			ans = min(ans,mid);
		}
		else
		{
			l = mid + 1;
		}
	}
	
	cout << ans << "\n";
	
	return 0;
}
