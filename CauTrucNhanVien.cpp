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
	getline(cin,A.name);
	cin >> A.sex >> A.date;
	cin.ignore();
	getline(cin,A.diachi);
	cin >> A.mst;
	cin >> A.hopdong;
}
void in(NhanVien A)
{
	cout << A.mnv <<" " << A.name << " " << A.sex<<
	" " << A.date <<" " << A.diachi << " "<< A.mst <<" " 
	<< A.hopdong;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
