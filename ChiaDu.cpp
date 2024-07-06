#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int a,m,ok=0;	cin >> a >> m;
		for(int x=1;x<m;x++)
		{
			if((a*x)%m==1)	
			{
				ok=1;
				cout<< x <<endl;
				break;
			}
		}
		if(ok==0)	cout << "-1"	<<endl;
	}
}
