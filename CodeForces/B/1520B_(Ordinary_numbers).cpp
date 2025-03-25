/*
Question:
Let's call a positive integer n ordinary if in the decimal notation all its digits are the same. For example, 1, 2
and 99 are ordinary numbers, but 719 and 2021 are not ordinary numbers.

For a given number n, find the number of ordinary numbers among the numbers from 1 to n.

Input
The first line contains one integer t (1≤t≤10^4). Then t test cases follow.

Each test case is characterized by one integer n (1≤n≤10^9).

Output
For each test case output the number of ordinary numbers among numbers from 1 to n.

Example
inputCopy
6
1
2
3
4
5
100
outputCopy
1
2
3
4
5
18
*/

/*
Idea: To have same digits we should have numbers multiple of 1, 11, 111, ...
Here, In input constraint max number can be 10^9, So 1111..8times
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
		int p=n;
		int res=0;
		int x=11111111;
		while(x)
		{
			if(n/x>0)
			{
				break;
			}
			x/=10;
		}
		for(;x>=11;x/=10)
		{
			res+=(n/x);
			n/=10;
		}
		
		if(res==0 && p<10)
		{
			res=p;
		}
		else
		{
			res=res+9;
		}
		cout<<res<<endl;
	}


}
