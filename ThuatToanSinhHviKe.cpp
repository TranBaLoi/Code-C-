#include<bits/stdc++.h>
using namespace std;
int a[100],n;
void hviKe(int a[], int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		a[i]=i;
	}
	while(1)
	{
		for(i=1;i<=n;i++)	cout << a[i] << " ";
		cout << endl;
		i=n-1;	// xet tu sau len truoc
		while(i>0 && a[i] > a[i+1])	--i; //tim vtri a[i] < a[i+1]    1 2 4 9 5 3 -> i==3 a[i]=4 
		if(i==0)	return;
		else 
		{
			int j=n;
			while(a[j] < a[i])	--j;	//tim so lon hon so can dao ma nho nhat
			swap(a[i],a[j]);
			int l=i+1,r=n;
			while(l<r)
			{
				swap(a[l],a[r]);
				l++;r--;
			}
		}
	}
}
int main()
{
	cin >> n;
	hviKe(a,n);
	return 0;
}
