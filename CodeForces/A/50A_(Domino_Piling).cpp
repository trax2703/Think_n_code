/*
Question
You are given a rectangular board of M × N squares. Also you are given an unlimited number of standard domino pieces of 2 × 1 squares. You are allowed to rotate the pieces. You are asked to place as many dominoes as possible on the board so as to meet the following conditions:

1. Each domino completely covers two squares.

2. No two dominoes overlap.

3. Each domino lies entirely inside the board. It is allowed to touch the edges of the board.

Find the maximum number of dominoes, which can be placed under these restrictions.

Input
In a single line you are given two integers M and N — board sizes in squares (1 ≤ M ≤ N ≤ 16).

Output
Output one number — the maximal number of dominoes, which can be placed.

Examples
inputCopy
2 4
outputCopy
4
inputCopy
3 3
outputCopy
4
*/

/*
Idea : In the worst, case we might have be left with only, one square. Because if we get any two squares, we can make them consecutive and put a domino.
		Weget one empty square in the case where there are odd total number of squares.

		So, It should be just ceil((m*n)/2).

		Else, as a brute method, we can do the recursion
		int func(int m,int n,int count)
		{
		    if(n<1)
		        return count;
		    if((m%2)==0 || n==1)
		        return func(m,n-1,count+(m/2));
		    return func(m,n-2,count+m);
		}
						
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

	int n,m;
	cin>>n>>m;

	cout<<((n*m)>>1)<<endl;


}