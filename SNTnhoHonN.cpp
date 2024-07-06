#include<iostream>
#include<math.h>
using namespace std;
int snt(int n)
{
	if(n==0 || n==1)	return 0;
	else if(n==2)	return 1;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)	return 0;
	}
	return 1;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >> n;
		for(int i=0;i<=n;i++)
		{
			if(snt(i))	cout << i << " ";
		}
		cout << endl;
	}
}
