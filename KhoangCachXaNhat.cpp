#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		int b[n] = {0};
		int k=0;
		for(auto &x : a)	cin >> x;
		for(int i=0;i<n;i++)
		{
			int l=i, r=n-1;
			if(l<=r)
			{
				while(l<=r)
				{
					if(a[l] <= a[r]) 
					{
						b[k] = r-l;
						k++;
						break;
					}
					else r--;		
				}
			}
			else break;
		}
		sort(b,b+k);
		cout << b[k-1] << endl;
	}
}
