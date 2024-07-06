#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		long long n;	cin >> n;
		int max=1;
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				n/=i;
				i=1;
			}
		}
		cout << n << endl;
	}
}
