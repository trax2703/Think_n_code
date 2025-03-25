/*
Question:
There are three cards with letters a, b, c placed in a row in some order. You can do the following operation at most once:

Pick two cards, and swap them.
Is it possible that the row becomes abc after the operation? Output "YES" if it is possible, and "NO" otherwise.

Input
The first line contains a single integer t(1≤t≤6) — the number of test cases.

The only line of each test case contains a single string consisting of each of the three characters a, b, and c
 exactly once, representing the cards.

Output
For each test case, output "YES" if you can make the row abc
 with at most one operation, or "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

Example
inputCopy
6
abc
acb
bac
bca
cab
cba
outputCopy
YES
YES
YES
NO
NO
YES

Note
In the first test case, we don't need to do any operations, since the row is already abc.

In the second test case, we can swap c and b: acb→abc.

In the third test case, we can swap b and a: bac→abc.

In the fourth test case, it is impossible to make abc using at most one operation.
*/

/*
Idea : At max if two are not in their respective poistions then we can just swap them,
So, Ill just check if at max two letters are not in place.
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
		char a[4];
		scanf("%s", a);
		char ref[4] = "abc";
		int count=0;
		for(int i=0; i<strlen(a); i++)
		{
			if(a[i] != ref[i])
			{
				count++;
			}		
		}
		if(count==0 || count==2)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}


}