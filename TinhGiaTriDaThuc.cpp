#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n, x; cin >> n >> x;
		int a[n];
		for(int i=0;i<n;i++)	cin >> a[i];
		long long lt=1, sum=0;
		for(int i=n-1;i>=0;i--)
		{
			sum += a[i] * lt;
			sum %= MOD;
			lt *= x;
			lt %= MOD;
		}
		cout << sum << endl;
	}
}
