struct point
{
	int time1,time2;	
};

bool cmp(point a,point b)
{
	return a.time2 > b.time2;	
}

point a[1005];

int main(void)
{
	int n;
	
	cin >> n;
	
	for(int i=0;i<n;i++)
	{
		cin >> a[i].time1 >> a[i].time2;
	}
	
	sort(a,a+n,cmp);
	int all = 0,ans = 0;
	
	for(int i=0;i<n;i++)
	{
		all += a[i].time1;
		int u2 = all + a[i].time2;
		ans = max(ans,u2);
	}
	
	cout << ans << "\n";
	
	return 0;
}
