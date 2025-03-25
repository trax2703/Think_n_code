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
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}

		vector<int> v;
		for(int i=1;i<n;i++)
		{
			v.push_back(max(a[i],a[i-1]));
		}

		int res=INT_MAX;
		for(auto it=v.begin();it!=v.end();it++)
		{
			res=min(*it,res);
		}
		cout<<res-1<<endl;
	}


}