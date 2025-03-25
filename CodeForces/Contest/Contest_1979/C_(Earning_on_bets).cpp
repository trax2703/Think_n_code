#include <bits/stdc++.h>
using namespace std;

int euclid_gcd(int a, int b)
{
	if(a<b)
	{
		a=a^b;
		b=a^b;
		a=a^b;
	}
	if(b==0)
		return a;
	return euclid_gcd(b, a%b);
}
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
		long long lcm=1;
		for(int i=0;i<n;i++)
		{
			long long gcd=euclid_gcd(a[i],lcm);
			lcm=(a[i]*lcm)/gcd;
		}
		//cout<<lcm<<endl;

		long long sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=(lcm/a[i]);
		}

		if(sum>=lcm)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				cout<<lcm/a[i]<<" ";
			}
			cout<<endl;
		}
	}


}