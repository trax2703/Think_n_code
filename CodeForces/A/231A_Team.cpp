/*
Question : 
One day three best friends Petya, Vasya and Tonya decided to form a team and take part in programming contests. Participants are usually offered several problems during programming contests. Long before the start the friends decided that they will implement a problem if at least two of them are sure about the solution. Otherwise, the friends won't write the problem's solution.

This contest offers n problems to the participants. For each problem we know, which friend is sure about the solution. Help the friends find the number of problems for which they will write a solution.

Input
The first input line contains a single integer n (1 ≤ n ≤ 1000) — the number of problems in the contest. Then n lines contain three integers each, each integer is either 0 or 1. If the first number in the line equals 1, then Petya is sure about the problem's solution, otherwise he isn't sure. The second number shows Vasya's view on the solution, the third number shows Tonya's view. The numbers on the lines are separated by spaces.

Output
Print a single integer — the number of problems the friends will implement on the contest.

Examples
inputCopy
3
1 1 0
1 1 1
1 0 0
outputCopy
2
inputCopy
2
1 0 0
0 1 1
outputCopy
1
*/
/*
Idea : Brute :), No specific logic 
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

	int n_p;
	cin>>n_p;
	int res=0;
	while(n_p--)
	{
		int cnt=0;
		for(int i=0;i<3;i++)
		{
			int x;
			cin>>x;
			cnt+=x;
		}
		if(cnt>=2)
		{
			res++;
		}

	}
	cout<<res<<endl;



}