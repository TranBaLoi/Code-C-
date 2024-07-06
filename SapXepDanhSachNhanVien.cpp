#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct NhanVien{
	string mnv, ten, gt, ns, dc, mst, hd;
	ll tuoi;
};
bool cmp(NhanVien a, NhanVien b)
{
	return a.tuoi < b.tuoi;
}
void nhap(NhanVien& a)
{
	cin.ignore();
	getline(cin, a.ten);
	cin >> a.gt >> a.ns ;
	cin.ignore();
	getline(cin, a.dc);
	cin >> a.mst >> a.hd;
}
void sapxep(NhanVien ds[], int n)
{
	ds[0].mnv = "00001";
	for(int i=1; i<n; i++)
	{
		ds[i].mnv = ds[i-1].mnv;
		if(ds[i].mnv[4] == '9')	
		{
			ds[i].mnv[3] += 1;
			ds[i].mnv[4] = '0'; 
		}
		else	ds[i].mnv[4] += 1;
	}
	for(int i=0; i<n; i++)
	{
		ds[i].tuoi = 0;
		int cnt = 0;
		int so[3] = {0,0,0};
		for(int j=0; j<ds[i].ns.size(); j++)
		{
			if(ds[i].ns[j] != '/')
			{
				so[cnt] = so[cnt]*10 + ds[i].ns[j];
			}	
			else 
			{
				cnt += 1;
			}
		}
		ds[i].tuoi = so[0]*30 + so[1] + so[2]*365;
	}
	sort(ds,ds+n,cmp);
}
void inds(NhanVien ds[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout << ds[i].mnv << " " << ds[i].ten << " " << 
		ds[i].gt << " " << ds[i].ns << " " << ds[i].dc << " " << 
		ds[i].mst << " " << ds[i].hd << endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
