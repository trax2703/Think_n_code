/*
Question:
Timur loves codeforces. That's why he has a string s having length 10 made containing only lowercase Latin letters. 
Timur wants to know how many indices string s differs from the string "codeforces".

For example string s="coolforsez" differs from "codeforces" in 4 indices, shown in bold.

Help Timur by finding the number of indices where string s differs from "codeforces".

Note that you can't reorder the characters in the string s.

Input
The first line contains a single integer t
 (1≤t≤1000) — the number of test cases.

Each test case is one line and contains the string s, consisting of exactly 10 lowercase Latin characters.

Output
For each test case, output a single integer — the number of indices where string s
 differs.

Example
inputCopy
5
coolforsez
cadafurcie
codeforces
paiuforces
forcescode
outputCopy
4
5
0
4
9
*/

/*
Idea : Just check by running for loop
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
		char a[11];
		scanf("%s",a);

		char ref[11]="codeforces";

		int count = 0;
		for(int i=0;i<10;i++)
		{
			if(a[i]!=ref[i])
			{
				count++;
			}
		}
		cout<<count<<endl;
	}


}