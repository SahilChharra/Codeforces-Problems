#include<iostream>
#include<vector>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int i=0;
	vector<int> a;
	vector<float> b;
	while(s[i]=='\0')
	{
		if(s[i]=='h')
		{
			a.push_back(i);
		}
		if(s[i]=='e')
		{
			a.push_back(i);
		}
		if(s[i]=='l')
		{
			a.push_back(i);
		}
		if(s[i]=='o')
		{
			a.push_back(i);
		}
		i++;
	}
	
	for(auto it = a.begin(); it!=a.end(); it++)
	{
		cout<<*it<<" ";
	}
}