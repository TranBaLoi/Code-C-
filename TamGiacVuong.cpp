#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n ;	cin >> n;
		ll a[n];
		for(int i=0; i<n; i++)
		{
			ll x; cin >> x;
			a[i] = x * x;
		}
		sort(a,a+n);
		int ok = 0;
		for(int i=n-1; i>=2; i--)
		{
			int l=0, r = i-1;
			while(l < r)
			{
				if(a[l] + a[r] == a[i])
				{
					ok = 1;
					break;
				}
				else if(a[l] + a[r] < a[i]) l++;
				else r--;
			}
			if(ok) break;
		}
		if(ok == 0)	cout << "NO";
		else cout << "YES";
		cout << endl;
	}
}
