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
		long long a[n];
		
		long long pref_sum[n+1]={0};
		pref_sum[0]=0;
		long long pref_maxi[n+1];
		pref_maxi[0]=INT_MIN;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(i>0)
			{
				pref_sum[i]=pref_sum[i-1]+a[i-1];
				pref_maxi[i]=max(pref_maxi[i-1], a[i-1]);
			}
		}
		pref_sum[n]=pref_sum[n-1]+a[n-1];
		pref_maxi[n]=max(pref_maxi[n-1], a[n-1]);
		int res=0;
		for(int i=1;i<=n;i++)
		{
			if(pref_maxi[i]*2 == pref_sum[i])
			{
				res++;
			}
		}
		cout<<res<<endl;

	}



}