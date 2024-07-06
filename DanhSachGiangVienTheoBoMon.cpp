#include<bits/stdc++.h>
using namespace std;
string chuanhoa(string s)
{
	string s1, token;	s1 = "";
	stringstream ss(s);
	while(ss >> token)
	{
		s1 += toupper(token[0]);
	}
	return s1;
}
int cnt = 0;
class GiangVien{
	private:
		string ten, mon, ma;
	public:
		GiangVien()
		{
			ten = mon = ma = " ";
		}
		friend istream& operator >> (istream& in, GiangVien &x)
		{
			cnt++;
			x.ma = "GV" + string(2-to_string(cnt).size(), '0') + to_string(cnt);
			getline(in>>ws, x.ten);
			getline(in>>ws, x.mon);
			return in;
		}
		friend ostream& operator << (ostream& out, GiangVien x)
		{
			out << x.ma << " " << x.ten << " " ;
			return out;
		}
		string getmon()
		{
			return mon;
		}
};
int main()
{
	int n;	cin >> n;
	GiangVien ds[n];
	for(int i=0;i<n;i++)	cin >> ds[i];
	int t;	cin >> t;
	while(t--)
	{
		string tuKhoa;	getline(cin >> ws, tuKhoa);
		cout << "DANH SACH GIANG VIEN BO MON " << chuanhoa(tuKhoa) << ":" << endl;	
		for(int i=0;i<tuKhoa.size();i++)	tuKhoa[i] = tolower(tuKhoa[i]);
		for(int i=0;i<n;i++)
		{
			string s = "";
			for(int j=0;j<ds[i].getmon().size();j++)
			{
				s += tolower(ds[i].getmon()[j]);
			}
			if(s.find(tuKhoa) != -1)	cout << ds[i] << chuanhoa(ds[i].getmon()) << endl;
		}
	}
	return 0;
}
