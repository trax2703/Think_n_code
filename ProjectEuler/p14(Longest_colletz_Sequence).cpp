#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll func(ll n, ll max_count)
{
	if(n==1)
		return max_count;

	if(n%2)
	{
		return func(3*n+1, max_count+1);
	}
	else{
		return func(n>>1, max_count+1);
	}
}
int main()
{
	// Write this Optionally, if you are taking input from file(input.txt) and putting it to a file(output.txt)
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	//

	ll res=0, num=1;
	for(ll i=1;i<=1000000;i++)
	{
		if(func(i,0)>res)
		{
			num = i;
			res=func(i,0);
		}
	}

	cout<<res<<" "<<num<<endl;

}