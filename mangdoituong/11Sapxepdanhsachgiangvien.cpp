#include<bits/stdc++.h>
using namespace std;
class GiangVien{
	public:
	int ds;
	string ten,mon,loai,name;
	void nhap(int k){
		ds=k;
		getline(cin,ten);
		stringstream sk(ten);
		string m;
		while(sk>>m)
		name=m;
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
	
	friend void sx(GiangVien a[],int n)
	{
		for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		{if(a[i].name>a[j].name) swap(a[i],a[j]);
		if(a[i].name==a[j].name&&a[i].ds>a[j].ds) swap(a[i],a[j]);
		}
	}
};
main()
{
	int n,i;
	cin>>n;
	GiangVien a[n+1];
	cin.ignore();
	for(int i=0;i<n;i++) a[i].nhap(i+1);
	sx(a,n);
	for(int i=0;i<n;i++) a[i].xuat();
}

