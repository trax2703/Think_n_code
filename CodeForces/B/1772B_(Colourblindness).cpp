/*
Question:
Vasya has a grid with 2 rows and n columns. He colours each cell red, green, or blue.

Vasya is colourblind and can't distinguish green from blue. Determine if Vasya will consider the two rows of the grid to be coloured the same.

Input
The input consists of multiple test cases. The first line contains an integer t
 (1≤t≤100) — the number of test cases. The description of the test cases follows.

The first line of each test case contains an integer n
 (1≤n≤100) — the number of columns of the grid.

The following two lines each contain a string consisting of n characters, each of which is either R, G, or B, representing a red, green, or blue cell, respectively — the description of the grid.

Output
For each test case, output "YES" if Vasya considers the grid's two rows to be identical, and "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

Example
inputCopy
6
2
RG
RB
4
GRBG
GBGB
5
GGGGG
BBBBB
7
BBBBBBB
RRRRRRR
8
RGBRRGBR
RGGRRBGR
1
G
G
outputCopy
YES
NO
YES
NO
YES
YES
*/

/*
Idea:
While taking input only, will take all B's as G's for making them all the same.
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

		char a[n+1];
		char b[n+1];
		scanf("%s",a);
		scanf("%s",b);

		for(int i=0;i<n;i++)
		{
			if(a[i]=='G')
			{
				a[i]='B';
			}
			if(b[i]=='G')
			{
				b[i]='B';
			}
		}

		int flag = 1;
		for(int i=0;i<n;i++)
		{
			if(a[i]!=b[i])
			{
				cout<<"NO"<<endl;
				flag=0;
				break;
			}
		}

		if(flag)
		{
			cout<<"YES"<<endl;
		}

	}


}