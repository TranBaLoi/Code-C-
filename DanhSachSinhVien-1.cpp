#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv="B20DCCN";
	string ten, lop, ns;
	float gpa;
};

void nhap(SinhVien ds[], int n)
{
	for(int i=0;i<n;i++)
	{
		cin.ignore();
		getline(cin, ds[i].ten);
		cin >> ds[i].lop >> ds[i].ns >> ds[i].gpa;
	}
}
void in(SinhVien ds[], int n)
{
	int a[3]={0,0,0};
	for(int i=0; i<n;i++)
	{
		for(int j=0;j<ds[i].ten.size();j++)	ds[i].ten[j] = tolower(ds[i].ten[j]);
		if(a[2] == 9)
		{
			a[1]++;
			a[2]=0;
		}
		else 
		{
			a[2]++;
		}
		if(ds[i].ns[2] != '/')	ds[i].ns = "0" + ds[i].ns;
		if(ds[i].ns[5] != '/')	ds[i].ns.insert(3,"0");
		stringstream ss(ds[i].ten);
		string tmp;
		vector<string>	v;
		while(ss >> tmp)
		{
			v.push_back(tmp);
		}
	
		cout << ds[i].msv ;
		for(int i=0;i<3;i++)	cout << a[i];
		cout << " ";
		for(auto x : v)
		{
			x[0]=toupper(x[0]);
			cout << x << " ";
		}
		cout << ds[i].lop << " " << ds[i].ns << " " << fixed <<setprecision(2) << ds[i].gpa;
		cout << endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
