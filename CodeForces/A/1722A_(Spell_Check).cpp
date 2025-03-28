/*
Question:
Timur likes his name. As a spelling of his name, he allows any permutation of the letters of the name. For example, the following strings are valid spellings of his name: Timur, miurT, Trumi, mriTu. Note that the correct spelling must have uppercased T and lowercased other letters.

Today he wrote string s of length n consisting only of uppercase or lowercase Latin letters. He asks you to check if s
is the correct spelling of his name.

Input
The first line of the input contains an integer t
 (1≤t≤103) — the number of test cases.

The first line of each test case contains an integer n
 (1≤n≤10) — the length of string s.

The second line of each test case contains a string s consisting of only uppercase or lowercase Latin characters.

Output
For each test case, output "YES" (without quotes) if s satisfies the condition, and "NO" (without quotes) otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

Example
inputCopy
10
5
Timur
5
miurT
5
Trumi
5
mriTu
5
timur
4
Timr
6
Timuur
10
codeforces
10
TimurTimur
5
TIMUR
outputCopy
YES
YES
YES
YES
NO
NO
NO
NO
NO
NO
*/

/*
Idea:
First check if the String is more than 5 length, first only reject it,
Else do Brute and check for the characters, hashing can be used but bcoz of only 5 letters, Im avoiding hashing.
Just Brute is more than efficient here I believe.
*/

#include <bits/stdc++.h>
using namespace std;

bool find_letter(char c, char search[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(search[i]==c)
		{
			return true;
		}
	}
	return false;
}
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
		scanf("%s",a);

		if(n>5)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			int count=0;
			char ref[6]="Timur";
			for(int i=0; i<5; i++)
			{
				if(find_letter(ref[i], a, n))
				{
					count++;
				}
			}
			if(count==5)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
	}


}