#include <bits/stdc++.h>
using namespace std;


#define ll long long
int find_factors(ll n)
{
	int cnt=0;
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i == 0)
		{
			if(i*i == n)
				cnt+=1;
			else
				cnt+=2;
		}
	}
	return cnt;
}
int main()
{
	// Write this Optionally, if you are taking input from file(input.txt) and putting it to a file(output.txt)
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	//

	int res=1;

	for(ll i=8000;i<15000;i++)
	{
		res=max(res,find_factors((i*(i+1))/2));
		if(res>=500)
		{
			cout<<"Final : "<<i<<endl;
			break;
		}
	}
	cout<<res<<endl;

}