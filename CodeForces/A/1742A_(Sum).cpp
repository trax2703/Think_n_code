/*
Question:
You are given three integers a, b, and c. Determine if one of them is the sum of the other two.

Input
The first line contains a single integer t (1≤t≤9261) — the number of test cases.

The description of each test case consists of three integers a, b, c
 (0≤a,b,c≤20).

Example
inputCopy
7
1 4 3
2 5 8
9 11 20
0 0 0
20 20 20
4 12 3
15 7 8
outputCopy
YES
NO
YES
YES
NO
NO
YES
*/

/* 
Idea : Since only three numbers are there 3c2 (3) combinations are there 
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

		int flag =0;
		if(a+b == c)
		{
			flag=1;
		}
		else if (a+c == b)
		{
			flag=1;
		}
		else if(b+c == a)
		{
			flag=1;
		}

		if (flag==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}

	


}