#include<bits/stdc++.h>
using namespace std;
int main()
{

		string s1,s2;	getline(cin,s1);	
		getline(cin,s2);
		stringstream ss(s1);
		string tmp;
		while(ss >> tmp)
		{
			if(tmp!=s2)	cout << tmp << " ";
		}
	
}
