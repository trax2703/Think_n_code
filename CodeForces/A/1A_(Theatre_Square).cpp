/*
Question :
Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a × a.

What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.

Input
The input contains three positive integer numbers in the first line: n,  m and a (1 ≤  n, m, a ≤ 109).

Output
Write the needed number of flagstones.

Examples
inputCopy
6 6 4
outputCopy
4
*/
/*
Idea : As it is like a rectangle(l * b), and paving square is (a*a), we have to cover length side also, breadth side also. 
It would be just like (l/a)*(b/a), but since it has to cover completely, ceil(l/a)*ceil(b/a).
*/

// Mistake : See constraints, before declaring variables.

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

	long long l,b,a;
	cin>>l>>b>>a;

	cout<<(long long)(ceil(l/(double)a) * ceil(b/(double)a))<<endl;
}