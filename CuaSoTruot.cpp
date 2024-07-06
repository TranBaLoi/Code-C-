#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;	cin >> n;
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)	cin >> a[i][j];
	}
	int m;	cin >> m;
	int b[m][m];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)	cin >> b[i][j];
	}
	int hang=0;
	while(hang<n)
	{
		int cot=0;
		while(cot<n)
		{
			int h1=0;
			for(int i=hang;i<hang+m;i++)
			{
				int c1=0;
				for(int j=cot;j<cot+m;j++)
				{
					a[i][j]=a[i][j]*b[h1][c1];
					c1++;
				}
				h1++;
			}
			cot+=m;
		}
		hang+=m;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)	cout << a[i][j] << " ";
		cout << endl;
	}
}
