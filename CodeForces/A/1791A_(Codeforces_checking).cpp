/*
Question:
Given a lowercase Latin character (letter), check if it appears in the string codeforces
.

Input
The first line of the input contains an integer t
 (1≤t≤26
) — the number of test cases.

The only line of each test case contains a character c
 — a single lowercase Latin character (letter).

Output
For each test case, output "YES" (without quotes) if c
 satisfies the condition, and "NO" (without quotes) otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

Example
inputCopy
10
a
b
c
d
e
f
g
h
i
j
outputCopy
NO
NO
YES
YES
YES
YES
NO
NO
NO
NO

*/

/*
Idea: Create a hash table for codeforces, and then check for every input is there an entry in hash table.
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
	char a[15]="codeforces";
	int n=strlen(a);
	int hash[26]={0};
	for(int i=0;i<n;i++)
	{
		hash[a[i]-'a']++;
	}
	while(t--)
	{
		char check;
		cin>>check;
		if(hash[check-'a'])
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}


}