#include<bits/stdc++.h>
using namespace std;
bool kt1(string a)
{int dem=0;
	for(int i=5;i<7;i++)
	{
		if(a[i]<a[i+1]) dem++;
	}
	if(a[7]<a[9]) dem++;
	if(a[9]<a[10]) dem++;
	if(dem==4) return true;
	else return false;
}
bool kt2(string a)
{int dem=0;
char x=a[5];
	for(int i=5;i<=10;i++)
	{
		if(a[i]==x) dem++;
	}
	if(dem==5) return true;
	else return false;
}
bool kt3(string a)
{
	if(a[5]==a[6]&&a[6]==a[7]&&a[9]==a[10]) return true;
	else return false;
}
bool kt4(string a)
{int dem=0;
	for(int i=5;i<=10;i++)
	{
	if(a[i]=='6'||a[i]=='8') dem++;	
	}
	if(dem==5) return true;
	else return false;
}
main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string a;
		getline(cin,a);
		if(kt1(a)==1||kt2(a)==1||kt3(a)==1||kt4(a)==1) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

