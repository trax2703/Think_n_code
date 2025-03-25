#include <bits/stdc++.h>
using namespace std;
/*
Question:

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

Idea:

1.
Mathematical simplification and exploit the property that numbers should be integers.

a = ((500-b)*(1000))/(1000-b)

2.
If we see in the different Angle, 
then
lets find few of the Pythagoras triplets,
3 4 5 -> 12 (1000 is not multiple of 12)
5 12 13 -> 30 (1000 is not multiple of 30)
8 15 17 -> 40 ( :-) )

Multiply into 25 to get the required numbers.

*/
int main()
{
	// Write this Optionally, if you are taking input from file(input.txt) and putting it to a file(output.txt)
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	//

	for(int b=1;b<500;b++)
	{
		int x=(500-b)*1000;
		int y=1000-b;
		if(x%y == 0)
		{
			cout<<b<<" "<<x/y<<endl;
		}
	}


}