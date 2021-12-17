#include<bits/stdc++.h>
using namespace std;
class Tapdoan{
	public:
	string ten,ma;
	int so;
	friend istream &operator>>(istream &is,Tapdoan &a)
	{
		cin.ignore();
		getline(is,a.ma);
		getline(is,a.ten);
		is>>a.so;
		return is;
	}
		friend ostream &operator<<(ostream &os,Tapdoan a)
	{
		os<<a.ma<<" "<<a.ten<<" "<<a.so<<endl;
		return os;
	}
	friend void sx(Tapdoan a[],int n)
	{
		for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		if(a[i].so<a[j].so) swap(a[i],a[j]);
		else if(a[i].so==a[j].so&&a[i].ma>a[j].ma) swap(a[i],a[j]);
	}
};
main()
{
	int N,i;
	cin>>N;
	Tapdoan a[N+1];
	for(i=0;i<N;i++) cin>>a[i];
	sx(a,N);
	int t,A,B;
	cin>>t;
	while(t--)
	{
	cin>>A>>B;	
	cout<<"DANH SACH DOANH NGHIEP NHAN TU "<<A<<" DEN "<<B<<" SINH VIEN:"<<endl;
	for(i=0;i<N;i++) 
	if(a[i].so>=A&&a[i].so<=B) cout<<a[i];
	}
}
