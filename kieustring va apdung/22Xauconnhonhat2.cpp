#include<bits/stdc++.h>
using namespace std;
void solve(string a,string b)
{
	int dem1[256]={},dem2[256]={};
	
	for(int i=0;i<b.size();i++)
	dem2[b[i]]++;//dem ky tu trong b
	
	int n=0,end=INT_MAX,begin=-1,dem=0;
	for(int i=0;i<a.size();i++)
	{
		dem1[a[i]]++;//dem ky tu xau a
		if(dem1[a[i]]<=dem2[a[i]]) dem++;
		if(dem==b.size())
		{
	while(dem1[a[n]]>dem2[a[n]]||dem2[a[n]]==0){
			if(dem1[a[n]]>dem2[a[n]])	dem1[a[n]]--;
			n++;//tim vi tri cuoi cung de thoa man
			}
			
		if(end>i-n+1){
			end=i-n+1;//tim gia tri cuoi
		begin=n;//tim gia tri dau
			}			
		}	
	}
	if(begin==-1)	cout<<"-1";
	else cout<<end;
}
int main(){
		int t;
	cin>>t;
	cin.ignore();
	while(t--){
	string s1;
	cin>>s1;
	string s2;
	int b[256]={};
	for(int i=0;i<s1.size();i++)
	{
	if(b[s1[i]]==0)	s2+=s1[i];
	b[s1[i]]++;
	}
	solve(s1,s2);
	
	cout<<endl;
				}	
	}

