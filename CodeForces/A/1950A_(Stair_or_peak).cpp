/*
Question:
You are given three digits a, b, and c. 
Determine whether they form a stair, a peak, or neither.

A stair satisfies the condition a<b<c.
A peak satisfies the condition a<b>c.

Input
The first line contains a single integer t
 (1≤t≤1000) — the number of test cases.

The only line of each test case contains three digits a, b, c (0≤a, b, c≤9).

Output
For each test case, output "STAIR" if the digits form a stair, "PEAK" if the digits form a peak, and "NONE" otherwise (output the strings without quotes).

Example
inputCopy
7
1 2 3
3 2 1
1 5 3
3 4 1
0 0 0
4 1 7
4 5 7
outputCopy
STAIR
NONE
PEAK
PEAK
NONE
NONE
STAIR
*/

/*
Idea:
Just Implementation :(
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
		int a,b,c;
		cin>>a>>b>>c;

		if((a<b) && (b<c))
		{
			cout<<"STAIR"<<endl;
		}
		else if((a<b) && (b>c))
		{
			cout<<"PEAK"<<endl;
		}
		else
		{
			cout<<"NONE"<<endl;
		}
	}


}