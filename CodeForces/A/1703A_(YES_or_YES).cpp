/*
Question:
There is a string s of length 3, consisting of uppercase and lowercase English letters. Check if it is equal to "YES" (without quotes), 
where each letter can be in any case. For example, "yES", "Yes", "yes" are all allowable.

Input
The first line of the input contains an integer t(1≤t≤103) — the number of testcases.

The description of each test consists of one line containing one string s
 consisting of three characters. Each character of s
 is either an uppercase or lowercase English letter.

Output
For each test case, output "YES" (without quotes) if s
 satisfies the condition, and "NO" (without quotes) otherwise.

You can output "YES" and "NO" in any case (for example, strings "yES", "yes" and "Yes" will be recognized as a positive response).

Example
inputCopy
10
YES
yES
yes
Yes
YeS
Noo
orZ
yEz
Yas
XES
outputCopy
YES
YES
YES
YES
YES
NO
NO
NO
NO
NO
Note
The first five test cases contain the strings "YES", "yES", "yes", "Yes", "YeS". All of these are equal to "YES", where each character is either uppercase or lowercase.
*/

/*
Idea : Convert the whole string to lower case/ upper case and then check for "yes".
Here, since only always 3 letters are here, we can have 6 cases directly and check 2 for each letter for checking either small or caps.
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
		int flag=0;

		if ((a[0]=='y' || a[0]=='Y') && (a[1]=='e' || a[1]=='E') && (a[2]=='s' || a[2]=='S'))
		{
			flag=1;
		}

		if(flag)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}



}