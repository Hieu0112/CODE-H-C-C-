#include<bits/stdc++.h>
using namespace std;
main()
{
	short t,x;
	cin>>t;
	while(t--)
	{
		int i=0,j;
		cin>>x;
		cin.ignore();
		string s,s1,a[100];
		getline(cin,s);
		stringstream s2(s);
		while(s2>>s1)
		{
			a[i++]=s1;
		}
			for(j=0;j<i;j++)
					{
						a[j][0]=toupper(a[j][0]);
						for(int h=1;h<a[j].length();h++)
						{
							a[j][h]=tolower(a[j][h]);
						}
					}
		switch(x)
		{
			case 1:
				{
				cout<<a[i-1];
				for(int k=0;k<i-1;k++)
				cout<<" "<<a[k];	
				break;
				}
				case 2:
					{
				for(int k=1;k<i;k++)
				cout<<a[k]<<" ";
				cout<<a[0];
					}
		}
		cout<<endl;
	}
}

