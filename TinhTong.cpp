#include<bits/stdc++.h>
using namespace std;
int check(string s)
{
	if(s.size() > 10)	return 0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i] > '9' || s[i] < '0')	return 0;
	}
	return 1;
}
int main()
{
	long long res = 0;
	fstream file;
	file.open("DATA.in");
	while(1)
	{
		string s;
		file >> s;
		if(file.eof())	break;
		if(check(s))	res += stoi(s);
	}
	file.close();
	cout << res << endl;
}
