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
		long long a,b;
		cin>>a>>b;
		long long res=a^b;
		//cout<<a^b<<endl;

		for(int i=0;i<64;i++)
		{
			if((res)&(1<<i))
			{
				res=(1<<i);
				break;
			}
		}
		cout<<res<<endl;
	}



}