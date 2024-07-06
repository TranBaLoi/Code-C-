#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,s; cin >> m >> s;
	string minNum, maxNum;
	int s1=s;
	if(s==0)
	{
		if(m==1)	cout << "0 0";
		else cout << "-1 -1";
		return 0;
	}
	if(s > 9*m)
	{
		cout << "-1 -1" ;
		return 0;
	}
	for(int i=0;i<m;i++)
	{
		int digit = max(0 , s - 9*(m-i-1));
		if(i == 0 && digit == 0)	digit = 1;
		minNum += to_string(digit);
		s -= digit;
	}
	for(int i=0;i<m;i++)
	{
		if(s1 >= 9)	
		{
			maxNum += "9";	s1 -= 9;
		}
		else if(s1 != 0)	
		{
			maxNum += to_string(s1); s1=0;
		}
		else maxNum += "0";
	}
	cout << minNum << " " << maxNum;
	return 0;
}
