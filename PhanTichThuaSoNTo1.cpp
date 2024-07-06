#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >> n;
		for(int i=2;i<=n/2;i++)
		{
			int cnt=0;
			if(n%i==0)
			{
				while(n%i==0)
				{
					cnt++;
					n/=i;
				}
			cout << i << " " << cnt << " " ;
			}
		}
		if(n!=1)	cout << n << " " << "1" << endl;
		else cout << endl;
	}
}
