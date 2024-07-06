#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string mnv="00001";
	string name;
	string sex;
	string date;
	string diachi;
	string mst;
	string hopdong;
};
void nhap(NhanVien &A)
{
	cin.ignore();
	getline(cin,A.name);
	cin >> A.sex >> A.date;
	cin.ignore();
	getline(cin,A.diachi);
	cin >> A.mst >> A.hopdong;
}
void inds(NhanVien A[],int n)
{
	for(int i=0;i<n;i++)
	{
		string s=to_string(i+1);
		s = string(5-s.size(),'0')+s;
		cout << s << " ";
		cout  << A[i].name << " " << A[i].sex<<
	" " << A[i].date <<" " << A[i].diachi << " "<< A[i].mst <<" " 
	<< A[i].hopdong <<endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
