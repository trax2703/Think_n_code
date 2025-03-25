/*
Question:
Four players participate in the playoff tournament. The tournament is held according to the following scheme: the first player will play with the second, 
and the third player with the fourth, then the winners of the pairs will play in the finals of the tournament.

It is known that in a match between two players, the one whose skill is greater will win. 
The skill of the i-th player is equal to si and all skill levels are pairwise different (i. e. there are no two identical values in the array s).

The tournament is called fair if the two players with the highest skills meet in the finals.

Determine whether the given tournament is fair.

Input
The first line contains a single integer t
 (1≤t≤104) — the number of test cases.

A single line of test case contains four integers s1,s2,s3,s4
 (1≤si≤100) — skill of the players. It is guaranteed that all the numbers in the array are different.

Output
For each testcase, output YES if the tournament is fair, or NO otherwise.

Example
inputCopy
4
3 7 9 5
4 5 6 9
5 3 8 1
6 5 3 2
outputCopy
YES
NO
YES
NO

/*
Idea:
Since only 4 numbers are there, we can find first(max1) and second maximum(max2) in all the four and then find max for 0, 1 position (first_max)
and then max for 2, and 3rd pos(sec_max).
We can run two for loops and without any storing postions we can find 1st and 2nd maximum because, In quesiton its mentioned
all the numbers are unique.
Ill compare if max1 and max2 match with first_max and sec_max.

Very nice thing I found it is:
If 
a+b == c+d 
AND
a*b == c*d

then, a=c and b=d

*/

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
		int a[4];
		int max1=INT_MIN;
		int max2 = INT_MIN;
		for(int i=0;i<4;i++)
		{
			cin>>a[i];
			max1 = max(max1, a[i]);
		}
		for(int i=0;i<4;i++)
		{
			if(a[i]!=max1)
			{
				max2 = max(max2, a[i]);
			}
		}

		int first_max = max(a[0], a[1]);
		int sec_max = max(a[2], a[3]);

		int sum1 = max1 + max2;
		int prod1 = max1 * max2;

		int sum2 = first_max + sec_max;
		int prod2 = first_max * sec_max;

		if(sum1 == sum2 && prod1 == prod2)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}

	}


}


