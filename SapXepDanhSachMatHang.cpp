#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct MatHang{
	int ma;
	string ten, nhom;
	double mua, ban;
	double lai;
};
bool cmp(MatHang A, MatHang B)
{
	return A.lai > B.lai;
}
void nhap(MatHang ds[],int n)
{
	for(int i=0;i<n;i++)
	{
		ds[i].ma = i+1;
		cin.ignore();
		getline(cin, ds[i].ten);
		getline(cin, ds[i].nhom);
		cin >> ds[i].mua >> ds[i].ban;
	}
}
void sapxep(MatHang ds[], int n)
{
	for(int i=0; i<n;i++)
	{
		ds[i].lai = ds[i].ban - ds[i].mua;
	}
	sort(ds,ds+n,cmp);
}
void in(MatHang ds[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout << ds[i].ma << " " << ds[i].ten << " " 
		<< ds[i].nhom << " " << fixed << setprecision(2) << ds[i].lai << endl;
	}
}
int main()
{
	int n; cin >> n;
	MatHang ds[n];
	nhap(ds,n);
	sapxep(ds,n);
	in(ds,n);
	return 0;
}
