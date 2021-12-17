#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string a;
		cin>>a;
		int n=a.length();
		for(int i=0;i<n;i++)
		{
			if((a[i]>='A'&&a[i]<='C')||(a[i]>='a'&&a[i]<='c')) a[i]='2';
			if((a[i]>='D'&&a[i]<='F')||(a[i]>='d'&&a[i]<='f')) a[i]='3';
			if((a[i]>='G'&&a[i]<='I')||(a[i]>='g'&&a[i]<='i')) a[i]='4';
			if((a[i]>='J'&&a[i]<='L')||(a[i]>='j'&&a[i]<='l')) a[i]='5';
			if((a[i]>='M'&&a[i]<='O')||(a[i]>='m'&&a[i]<='o')) a[i]='6';
			if((a[i]>='P'&&a[i]<='S')||(a[i]>='p'&&a[i]<='s')) a[i]='7';
			if((a[i]>='T'&&a[i]<='V')||(a[i]>='t'&&a[i]<='v')) a[i]='8';
			if((a[i]>='W'&&a[i]<='Z')||(a[i]>='w'&&a[i]<='z')) a[i]='9';
		}
		int k=0;
		for(int i=0;i<n/2;i++)
		if(a[i]!=a[n-i-1]){
			k=1;
			cout<<"NO\n";break;
		}
		if(k==0) cout<<"YES\n";
	}
}

