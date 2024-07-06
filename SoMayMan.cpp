#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >> n;
		if(n%10==6 && (n/10)%10==8)	cout << "1"<< endl;
		else cout << "0"<< endl;
	}
}
