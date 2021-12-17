#include<bits/stdc++.h>
using namespace std;
class GiangVien{
	public:
	int ds;
	string ten,mon,loai,name;
	void nhap(int k){
		ds=k;
		getline(cin,ten);
		getline(cin,mon);
		string s,a1="";
		stringstream ss(mon);
		while(ss>>s)
		{
			a1+=toupper(s[0]);
		}
		loai=a1;
	}
	void xuat()
	{
		cout<<"GV";
		if(ds<10) cout<<"0";
			cout<<ds<<" "<<ten<<" "<<loai<<endl;
	}
	int thuong(string s)
	{
		string m="";
		for(int i=0;i<s.size();i++) s[i]=tolower(s[i]);
		for(int i=0;i<ten.size();i++) m+=tolower(ten[i]);
		int k=m.find(s);
		return k;
	}
};
main()
{
	int n,i;
	cin>>n;
	GiangVien a[n+1];
	cin.ignore();
	for(int i=0;i<n;i++) a[i].nhap(i+1);
	int Q;
	cin>>Q;
	cin.ignore();
	while(Q--)
	{string tt;
	getline(cin,tt);
	cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<tt<<":"<<endl;
	for(int i=0;i<n;i++) 
	if(a[i].thuong(tt)!=-1)
	a[i].xuat();
	}
}

