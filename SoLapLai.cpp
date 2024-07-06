#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int a,x,y;	cin >> a >> x >> y;
		int r=__gcd(x,y);
		for(int i=1;i<=r;i++)
		{
			cout << a;
		}
		cout << endl;
	}
}
