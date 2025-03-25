/*
Question:
You are given three digits a, b, c. Two of them are equal, but the third one is different from the other two.

Find the value that occurs exactly once.

Input
The first line contains a single integer t(1≤t≤270) — the number of test cases.

The only line of each test case contains three digits a, b, c(0≤a, b, c≤9). Two of the digits are equal, but the third one is different from the other two.

Output
For each test case, output the value that occurs exactly once.

Example
inputCopy
10
1 2 2
4 3 4
5 5 6
7 8 8
9 0 9
3 6 3
2 8 2
5 7 7
7 7 5
5 7 5
outputCopy
1
3
6
7
0
6
8
5
5
7
*/

/*
Idea: It can be simply solved by implementing with many if conditions,
But nice logic here is a xor a = 0, 0 xor a = a.
By using these, any two repeated numbers xored gives 0 and 0 xored with any number is number itself.
Also, very important is this operation associtative in nature. Hence, order doesnt matter.
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
		cout<<((a^b)^c)<<endl;
	}


}