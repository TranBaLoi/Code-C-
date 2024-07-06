#include<bits/stdc++.h>
#define  fix fixed
#define set setprecision(1)
using namespace std;
struct SinhVien{
	string msv, lop, ten;
	double diem1, diem2 , diem3;
};
bool cmp(SinhVien a, SinhVien b)
{
	return a.msv < b.msv;
}
void sap_xep(SinhVien ds[], int n)
{
	sort(ds,ds+n,cmp);
}
void nhap(SinhVien &a)
{
	cin >> a.msv;
	cin.ignore();
	getline(cin, a.ten);
	cin >> a.lop >> a.diem1 >> a.diem2 >> a.diem3;
}
void in_ds(SinhVien ds[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout << i+1 << " " << ds[i].msv << " "
		<< ds[i].ten << " " << ds[i].lop << " "
		<< fix  << set << ds[i].diem1 << " " << ds[i].diem2 << " "
		<< ds[i].diem3;
		cout << endl;
	}
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
