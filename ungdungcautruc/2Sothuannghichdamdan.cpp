#include<bits/stdc++.h>
using namespace std;
struct So{
	string s;
	int stt;
	int length;
};
bool check_tn(string s)
{
	int n=s.size();
	if(n==1) return false;
	else{
		for(int i=0;i<n/2;i++)
		if(s[i]!=s[n-1-i]) return false;
		return true;
	}
}
bool sx(So a,So b)
{
	if(a.s.size()>b.s.size()) return true;
	else if(a.s.size()==b.s.size()) return a.s>b.s;
	return false;
}
main()
{
	struct So a[10000],s1[10000];
	int x=0;
	while(cin>>a[x].s)
	{
		a[x].length=a[x].s.size();
		x++;
	}
	int dem=0,k=0;
	for(int i=0;i<x;i++)
	{
		dem=0;
		if(check_tn(a[i].s)&&a[i].length>1){
			for(int j=i+1;j<x;j++){
				if(a[i].s==a[j].s){
				dem++;
				a[j].length=1;
				}
			}
			s1[k].s=a[i].s;
			s1[k].length=a[i].length;
			s1[k].stt=dem;
			k++;
		}
	}
	sort(s1,s1+k,sx);
	for(int i=0;i<k;i++){
	cout<<s1[i].s<<" "<<s1[i].stt+1<<endl;
	}
}

