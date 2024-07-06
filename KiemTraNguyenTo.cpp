#include<iostream>
#include<math.h>
using namespace std;
int snt(int n)
{
	if(n==0||n==1)	return 0;
	else if(n==2)	return 1;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)	return 0;
	}
	return 1;
}
int main()
{
	int n;	cin >> n;
	if(snt(n))	cout << "YES";
	else cout << "NO";
}
