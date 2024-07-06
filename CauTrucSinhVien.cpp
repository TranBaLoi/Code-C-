#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv="B20DCCN001";
	string name;
	string lop;
	string date;
	float gpa;
};
void nhap(SinhVien &A)
{
	getline(cin,A.name);
	cin >> A.lop;
	cin >> A.date;
	cin >> A.gpa;
	if(A.date[1]=='/')
	{
		A.date="0"+A.date;
	}
	if(A.date[4]=='/')
	{
		A.date.insert(3,"0");
	}
}
void in(SinhVien A)
{
	cout << A.msv <<" " << A.name << " " << A.lop 
	<< " " << A.date << " "<< fixed << setprecision(2) << A.gpa;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
