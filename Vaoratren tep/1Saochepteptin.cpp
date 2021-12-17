#include<bits/stdc++.h>
using namespace std;
void copyfile(char *name1,char *name2)
{
	ifstream fp1;
	fp1.open(name1);
	ofstream fp2;
	fp2.open(name2);
	char line[255];
	while(!fp1.eof())
	{
		fp1.getline(line,80);//doc tren 1 dong
		cout<<line<<endl;
		fp2<<line<<endl;// them 1 dong vao file
	}
	fp1.close();
	fp2.close();
}
main()
{
	copyfile("DATA.txt","PTIT.out");
}
