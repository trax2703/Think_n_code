#include <bits/stdc++.h>
using namespace std;

/*
Question:

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

Idea:

1.
Use sieve and find.

*/

#define ll long long

bool is_prime[2000000];
void generate_sieve(int n)
{
	for(int i=2;i<n;i++)
	{
		is_prime[i]=true;
	}

	for(int i=2;i<sqrt(n);i++)
	{
		if(is_prime[i])
		{
			for(int x=2*i;x<n;x+=i)
			{
				is_prime[x]=false;
			}
		}
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

	ll n = 2000000;
	generate_sieve(n);

	int ref_cnt = 10001;
	int cnt=1;
	for(int i=2;i<2000000;i++)
	{
		if(is_prime[i] && (cnt == ref_cnt))
		{
			cout<<i<<endl;
			break;
		}
		if(is_prime[i])
		{
			cnt++;
		}
	}





}