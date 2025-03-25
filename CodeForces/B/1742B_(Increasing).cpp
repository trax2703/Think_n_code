/*
Question:
You are given an array a of n positive integers. Determine if, by rearranging the elements, 
you can make the array strictly increasing. In other words, determine if it is possible to rearrange the elements such that a1<a2<⋯<an holds.

Input
The first line contains a single integer t
 (1≤t≤100) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤100) — the length of the array.

The second line of each test case contains n integers ai
 (1≤ai≤109) — the elements of the array.

Output
For each test case, output "YES" (without quotes) if the array satisfies the condition, and "NO" (without quotes) otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

Example
inputCopy
3
4
1 1 1 1
5
8 7 1 3 4
1
5
outputCopy
NO
YES
YES

*/

/*
Idea:
Sort and check for every alternate numbers, if they are same then its impossible to have strictly increasing order.
As two same numbers make them monotonous.
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
		int n;
		cin>>n;

		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}

		sort(a, a+n);

		bool flag=false;
		for(int i=1;i<n;i++)
		{
			if(a[i]==a[i-1])
			{
				flag=true;
				break;
			}
		}

		if(flag)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
}