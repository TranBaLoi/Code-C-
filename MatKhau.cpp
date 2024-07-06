#include<bits/stdc++.h>
using namespace std;
struct user{
	string pass;
	int cdai;
};
bool cmp(user A, user B)
{
	return A.cdai > B.cdai;
}
int main()
{
	int n;	cin >> n;
	user x[n+1];
	int cnt = 0;
	for(int i=0;i<n;i++)
	{
		cin >> x[i].pass;
		x[i].cdai = x[i].pass.length();
	}
	sort(x,x+n,cmp);
	for(int i=0; i<n-1 ;i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(x[i].pass == x[j].pass)	cnt += 2;
			else if(x[i].pass.find(x[j].pass) != -1)	cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
