#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >> n;
	int a[n],cnt[100001]={0},dem=0;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		cnt[a[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		if(cnt[a[i]]>1)	dem++;
	}
	cout << dem << endl;
	}
}
