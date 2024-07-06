#include<bits/stdc++.h>
using namespace std;
int main()
{

	
		int n;	cin >> n;
		int a[n][3],k=0,cnt=0;
		for(int i=0 ;i<n;i++)
		{
			for(int j=0;j<3;j++)	cin >> a[i][j];
		}
		for(int i=0 ;i<n;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(a[i][j]==1) k++;
			}
			if(k>1)	cnt++;
			k=0;
		}
		cout << cnt << endl;
	
}
