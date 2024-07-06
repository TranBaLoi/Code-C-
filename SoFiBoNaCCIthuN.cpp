#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int k;	cin >> k;
		if(k==1 || k==2)	
		{
			cout << "1" <<endl;
			continue;
		}
		else 
		{
			long long f1=1,f2=1;
			for(int i=3;i<=92;i++)
			{
				long long fn=f1+f2;
				if(i==k)
				{
					cout << fn << endl;
					break;
				}
				f1=f2;
				f2=fn;
			}
		}
	}
}
