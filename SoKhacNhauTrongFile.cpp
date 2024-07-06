#include<bits/stdc++.h>
using namespace std;
int main()
{
	fstream file;
	file.open("DATA.in");
	map<int,int> mp;
	int n;
	while(file >> n)
	{
		mp[n]++;
	}
	for(auto it : mp)
	{
		cout << it.first << " " << it.second << endl;
	}
}
