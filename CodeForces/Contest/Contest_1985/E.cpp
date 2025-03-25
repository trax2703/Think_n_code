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
		long long a[3];
		for(int i=0;i<3;i++)
		{
			cin>>a[i];
		}
		long long k;
		cin>>k;
		sort(a,a+3);
		long long p,q,r;
		for(int i=a[0];i>=1;i--)
		{
			if(k%i == 0)
			{
		
				p=i;
				break;
			}
		}
		k/=p;
		for(int i=a[1];i>=1;i--)
		{
			if(k%i==0)
			{
				q=i;
				break;
			}
		}
		k/=q;
		for(int i=a[2];i>=1;i--)
		{
			if(k%i==0)
			{
				r=i;
				break;
			}
		}
		k/=r;
		if(k==1)
		{
			long long res=(a[0]-p+1)*(a[1]-q+1)*(a[2]-r+1);
			cout<<res<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
	}
	

}