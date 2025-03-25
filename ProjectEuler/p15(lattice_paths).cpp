#include <bits/stdc++.h>
using namespace std;


#define ll long long

ll ncr(ll n, ll r)
{
	ll res=1;
	for(int i=1;i<=r;i++)
	{
		res = (res*(n-i+1))/(i);
	}
	return res;
} 
int main()
{
	// Write this Optionally, if you are taking input from file(input.txt) and putting it to a file(output.txt)
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	//

	cout<<ncr(40,20)<<endl;


}