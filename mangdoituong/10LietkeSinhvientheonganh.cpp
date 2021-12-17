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
	cin.ignore();
    while(t--)
    {string a,check;
	getline(cin,a);
	for(int i=0;i<a.size();i++) a[i]=toupper(a[i]);
	
	if(a=="KE TOAN") check="DCKT";
	if(a=="CONG NGHE THONG TIN") check="DCCN";
	if(a=="AN TOAN THONG TIN") check="DCAT";
	if(a=="VIEN THONG") check="DCVT";
	if(a=="DIEN TU") check="DCDT";
	
	cout<<"DANH SACH SINH VIEN NGANH "<<a<<":"<<endl;
    for(int i=0;i<N;i++) {
	if(ds[i].ma.find(check)!=-1&&check!="DCCN"&&check!="DCAT")
	cout << ds[i];
	if(ds[i].ma.find(check)!=-1&&(check=="DCCN"||check=="DCAT")&&ds[i].lop[0]!='E')
	cout<< ds[i];
		}
	}
    return 0;
}
