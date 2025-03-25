/*
Question:
You are given four distinct integers a, b, c, d.

Timur and three other people are running a marathon. The value a
 is the distance that Timur has run and b, c, d correspond to the distances the other three participants ran.

Output the number of participants in front of Timur.

Input
The first line contains a single integer t(1≤t≤104) — the number of test cases.

The description of each test case consists of four distinct integers a, b, c, d
 (0≤a,b,c,d≤104).

Output
For each test case, output a single integer — the number of participants in front of Timur.

Example
inputCopy
4
2 3 4 1
10000 0 1 2
500 600 400 300
0 9999 10000 9998
outputCopy
2
0
1
3

Note
For the first test case, there are 2 people in front of Timur, specifically the participants who ran distances of 3 and 4. 
The other participant is not in front of Timur because he ran a shorter distance than Timur.

For the second test case, no one is in front of Timur, since he ran a distance of 10000 while all others ran a distance of 0, 1, and 2 respectively.

For the third test case, only the second person is in front of Timur, who ran a total distance of 600 while Timur ran a distance of 500.

*/

/*
Idea : Take a, check every other element greater than a, keep a count and print it :)
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
		int a,b,c,d;
		cin>>a>>b>>c>>d;

		int res=0;
		res+=(a<b)?1:0;
		res+=(a<c)?1:0;
		res+=(a<d)?1:0;

		cout<<res<<endl;
	}


}