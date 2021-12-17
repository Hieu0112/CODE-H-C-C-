#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	public:
		string ma,ten,lop,mail;
		friend istream &operator>>(istream &is,SinhVien &a)
		{
			scanf("\n");
			getline(is,a.ma);
			getline(is,a.ten);
			getline(is,a.lop);
			getline(is,a.mail);
			return is;
		}
		friend ostream &operator<<(ostream &os,SinhVien &a)
		{
			os<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.mail<<endl;
			return os;
		}
};
int main(){
    SinhVien ds[1009];
    int N;
    cin>>N;
    for(int i=0;i<N;i++) cin>>ds[i];
    int t;
	cin>>t;
    while(t--)
    {string a;
	cin>>a;
	cout<<"DANH SACH SINH VIEN KHOA "<<a<<":"<<endl;
    for(int i=0;i<N;i++) 
	if(a[2]==ds[i].lop[1]&&a[3]==ds[i].lop[2])
	cout << ds[i];
	}
    return 0;
}
