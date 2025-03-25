/*
Question:
You are given an expression of the form a+b, where a and b are integers from 0 to 9. 
You have to evaluate it and print the result.

Input
The first line contains one integer t
 (1≤t≤100) — the number of test cases.

Each test case consists of one line containing an expression of the form a+b
 (0≤a,b≤9, both a and b are integers). The integers are not separated from the + sign.

Output
For each test case, print one integer — the result of the expression.

Example
inputCopy
4
4+2
0+0
3+7
8+9
outputCopy
6
0
10
17
*/

/*
Idea : Implementational :)
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
		char a[5];
		scanf("%s",a);

		int res=0;
		res = (a[0]-'0')+(a[2]-'0');
		cout<<res<<endl;
	}


}