#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv="B20DCCN";
	string ten, lop, ns;
	float gpa;
};

bool cmp(SinhVien A, SinhVien B)
{
	return A.gpa > B.gpa;
}
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
		ds[i].ten[0] = toupper(ds[i].ten[0]);
		for(int j=1;j<ds[i].ten.size();j++)	
		{
			if(ds[i].ten[j-1] == ' ')	ds[i].ten[j] = toupper(ds[i].ten[j]);
		}
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
		for(int j=0;j<3;j++)	ds[i].msv = ds[i].msv + to_string(a[j]);
	}
	sort(ds,ds+n,cmp);
	for(int i=0; i<n;i++)
	{
		cout << ds[i].msv << " " << ds[i].ten
		<< " " << ds[i].lop << " " << ds[i].ns
		<< " " << fixed << setprecision(2) << ds[i].gpa << endl;
		
	}
}
void sapxep(SinhVien ds[], int n)
{
	
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
