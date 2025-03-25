#include <bits/stdc++.h>
using namespace std;

int main()
{
	// Write this Optionally, if you are taking input from file(input.txt) and putting it to a file(output.txt)
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	//
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;

		char a[n+1];
		scanf("%s",a);

		int ind[m];

		int hash[n]={0};
		for(int i=0;i<m;i++)
		{
			cin>>ind[i];
			hash[ind[i]-1]++;
		}
		char c[m+1];
		scanf("%s",c);
		sort(c,c+m);

		int c_ind=0;
		for(int i=0;i<n;i++)
		{
			if(hash[i]>0)
			{
				a[i]=c[c_ind++];
			}
		}
		cout<<a<<endl;
	}
}