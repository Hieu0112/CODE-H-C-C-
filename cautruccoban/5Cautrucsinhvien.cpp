#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ten,lop;
	int ngay,thang,nam;
	double GPA;
	char x;
};
void nhap(SinhVien &a)
{
	getline(cin,a.ten);
	getline(cin,a.lop);
	cin>>a.ngay;
	cin>>a.x;
	cin>>a.thang;
	cin>>a.x;
	cin>>a.nam;
	cin>>a.GPA;
}
void in(SinhVien a)
{
	cout<<"B20DCCN001"<<" "<<a.ten<<" "<<a.lop<<" ";
	if(a.ngay/10==0) cout<<"0";
	cout<<a.ngay<<"/";
	if(a.thang/10==0) cout<<"0";
	cout<<a.thang<<"/"<<a.nam<<" ";
	cout<<fixed<<setprecision(2)<<a.GPA;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}

