#include<bits/stdc++.h>
using namespace std;
int findMinops(int a[],int n)
{
	int l=0, r=n-1;
	int ans = 0;
	while(l<=r)
	{
		if(a[l] == a[r])
		{
			l++;
			r--;
		}
		else if(a[l] < a[r])
		{
			l++;
			a[l] += a[l-1];
			ans++;
		}
		else 
		{
			r--;
			a[r] += a[r+1];
			ans++;
		}
	}
	return ans;
}
int main()
{
	int t;	
	cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int arr[n];
		for(auto &x : arr) cin >> x;
		cout << findMinops(arr,n) << endl; 
	}
}
