#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n, p;	cin >> n >> p;
		int i = 1;
		while(pow(p,i) <= n)	i++;
		int cnt = 0;
		for(int j=1;j<=i;j++)
		{
			int ao = pow(p,j);
			cnt = cnt + n/ao;
		}
		cout << cnt << endl;
	}
}
