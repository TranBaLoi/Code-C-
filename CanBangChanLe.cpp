#include<bits/stdc++.h>
using namespace std;
int check(int n)
{
	int a=0,b=0;
	while(n>0)
	{
		if((n%10)%2==0)	a+=1;
		else b+=1;
		n/=10;
	}
	if(a==b)	return 1;
	else return 0;
}
int main()
{
	int n;	cin >> n;
	int dem=0;
	for(int i=pow(10,n-1);i<pow(10,n);i++)
	{
		if(check(i))
		{
			cout << i << " ";
			dem+=1;
		}
		if(dem==10)	
		{
			cout << endl;
			dem=0;
		}
	}
}
