#include<bits/stdc++.h>
using namespace std;
#define MAX 100009
struct SoTu{
	string tu;
	int so;
};
int Search(SoTu a[],int n,string s)
{
	for(int i=1;i<=n;i++)
	if(a[i].tu==s) return i;
	return n+1;
}
void Result(SoTu a[],int n)
{
	for(int i=1;i<n;i++)
	for(int j=i+1;j<=n;j++)
	{
	if(a[i].tu.size()>a[j].tu.size()) swap(a[i],a[j]);
	if(a[i].tu.size()==a[j].tu.size()&&a[i].tu>a[j].tu) swap(a[i],a[j]); 
	}
	for (int i=1;i<=n;i++)
	cout<<a[i].tu<<" "<<a[i].so<<endl;
}
main()
{
	ifstream fp("DATA.in");
	SoTu a[MAX];
	int n=0;
	while(!fp.eof())
	{
		string s;
		fp>>s;
		if(s.size()>0){
		int k=Search(a,n,s);
		if(k<=n) a[k].so++;
		else{
			n=k;
			a[k].tu=s;
			a[k].so=1;
		}
	}
	}
	Result(a,n);
	fp.close();
}
