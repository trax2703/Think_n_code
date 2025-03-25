/*
Question:

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

Idea:

1. Generate Sieve before in hand (limit - ?), and iterate from beginning, you find a prime to be a factor of a number(num), then update the number(num) by dividing it by the factor. 

*/

#include <bits/stdc++.h>
using namespace std;
bool is_prime[2000000];

#define ll long long
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
	
	generate_sieve(2000000);

	ll n = 600851475143;
	int i=2;
	while(n!=1)
	{
		if(is_prime[i])
		{
			while(n!=1 && (n%i == 0))
			{
				cout<<i<<endl;
				n=n/i;
			}
		}
		i++;
	}

}