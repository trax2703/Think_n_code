/*

Question:
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

Idea:
Brute :)

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	// Write this Optionally, if you are taking input from file(input.txt) and putting it to a file(output.txt)
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	//
	int sum=0;
	for(int i=3;i<1000;i++)
	{
		if((i%3 == 0) || (i%5 == 0))
		{
			sum+=i;
		}
	}
	cout<<sum<<endl;
}

