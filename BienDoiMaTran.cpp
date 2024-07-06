#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >> n;
		int a[n][n];
		vector<int>	v;
		int h1=0,c1=0,max=-1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)	cin >> a[i][j];
		}
		while(h1<n)
		{
			int hang=0,cot=0;
			for(int i=0;i<n;i++)
			{
				hang+=a[h1][i];
				cot+=a[i][c1];
			}
			v.push_back(hang);
			v.push_back(cot);
			h1++;	c1++;
		}
		int sum=0;
		for(int i=0;i<v.size();i++)	
		{
			if(v[i]>max)	max=v[i];
			sum+=v[i];
		}
		cout << ((max*2*n)-sum)/2 << endl;
	}
}
