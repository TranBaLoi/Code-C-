#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >> n;
		int a[n],ok=0,sum=0;
		for(int i=0;i<n;i++)	
		{
			cin >> a[i]; sum+=a[i];
		}
		int sum1=0;
		for(int i=1;i<n-1;i++)
		{
			sum1+=a[i-1];
			if((sum-a[i]) % 2 ==0)
			{
				if((sum-a[i])/2 == sum1)
				{
					cout << i+1;
					ok=1;
					break;
				}
			}
		}
		if(ok==0)	cout << -1 ;
		cout << endl;
	}
}
