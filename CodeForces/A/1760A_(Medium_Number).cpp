/*
Question:
Given three distinct integers a, b, and c, find the medium number between all of them.

The medium number is the number that is neither the minimum nor the maximum of the given three numbers.

For example, the median of 5,2,6 is 5, since the minimum is 2 and the maximum is 6.

Input
The first line contains a single integer t(1≤t≤6840) — the number of test cases.

The description of each test case consists of three distinct integers a, b, c(1≤a,b,c≤20).

Output
For each test case, output a single integer  the medium number of the three numbers.

Example
inputCopy
9
5 2 6
14 3 4
20 2 1
1 2 3
11 19 12
10 8 20
6 20 3
4 1 3
19 8 4
outputCopy
5
4
2
2
12
10
6
3
8

*/

/*
Idea:
Sorting can be used but think, its not so necessary.
Since we have three numbers only, find min and max and sum of all the numbers,
subtract both the min and max from the sum of all the numbers. :)
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
		int sum=a+b+c;
		int maxi = max(max(a,b),c);
		int mini = min(min(a,b),c);
		cout<<sum-maxi-mini<<endl; 
	}


}