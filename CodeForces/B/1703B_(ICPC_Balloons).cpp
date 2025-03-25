/*
Questions:
In an ICPC contest, balloons are distributed as follows:

Whenever a team solves a problem, that team gets a balloon.
The first team to solve a problem gets an additional balloon.
A contest has 26 problems, labelled A, B, C, ..., Z. 

You are given the order of solved problems in the contest, denoted as a string s, where the i-th character indicates that the problem si
 has been solved by some team. No team will solve the same problem twice.
Determine the total number of balloons that the teams received. Note that some problems may be solved by none of the teams.

Input
The first line of the input contains an integer t
 (1≤t≤100) — the number of testcases.

The first line of each test case contains an integer n
 (1≤n≤50) — the length of the string.

The second line of each test case contains a string s
 of length n consisting of uppercase English letters, denoting the order of solved problems.

Output
For each test case, output a single integer — the total number of balloons that the teams received.

Example
inputCopy
6
3
ABA
1
A
3
ORZ
5
BAAAA
4
BKPT
10
CODEFORCES
outputCopy
5
2
6
7
8
17
*/

/*
Idea:
Have an hash of size 26, where every index represent if we had encountered the letter in a string before,
For the first time only, we increment the count with two, rest only once.
Is it the first time we are encountering with the letter can be found using the hasj
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
		int n, res=0;
		cin>>n;

		char a[n+1];
		scanf("%s", a);

		bool hash[26];
		for(int i=0;i<26;i++)
		{
			hash[i]=false;
		}

		for(int i=0;i<n;i++)
		{
			if(hash[a[i]-'A']==false)
			{
				hash[a[i]-'A']=true;
				res+=2;
			}
			else
			{
				res++;
			}
		}

		cout<<res<<endl;
	}


}