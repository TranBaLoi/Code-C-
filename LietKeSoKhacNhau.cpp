#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;	cin >> n;
	int a[n],cnt[10000]={0};
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		cnt[a[i]]++;
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		if(cnt[a[i]]!=0)
		{
			cout << a[i] << " ";
			cnt[a[i]]=0;
		}
	}
}
