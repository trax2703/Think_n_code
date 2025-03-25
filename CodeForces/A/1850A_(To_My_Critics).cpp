/*
Question:
Suneet has three digits a, b, and c.

Since math isn't his strongest point, he asks you to determine if you can choose any two digits to make a sum greater or equal to 10.

Output "YES" if there is such a pair, and "NO" otherwise.

Input
The first line contains a single integer t(1≤t≤1000) — the number of test cases.

The only line of each test case contains three digits a, b, c(0≤a,b,c≤9).

Output
For each test case, output "YES" if such a pair exists, and "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

Example
inputCopy
5
8 1 2
4 4 5
9 9 9
0 0 0
8 5 3
outputCopy
YES
NO
YES
NO
YES
*/

/* 
Idea : Since only three numbers, 3C2(3) Combinations, Brute should be simple :)
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
		if((a+b>=10) || (b+c>=10) || (a+c>=10))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}


}