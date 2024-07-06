#include<bits/stdc++.h>
using namespace std;
int main()
{
	ifstream inFile("PTIT.in");
	ofstream outFile("PTIT.out");
	string line;
	while(getline(inFile, line))
	{
		outFile << line << endl;
	}
	inFile.close();
	outFile.close();
	return 0;
}
