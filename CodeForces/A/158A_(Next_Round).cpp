/*
Question : 
"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of n participants took part in the contest (n ≥ k), and you already know their scores. Calculate how many participants will advance to the next round.

Input
The first line of the input contains two integers n and k (1 ≤ k ≤ n ≤ 50) separated by a single space.

The second line contains n space-separated integers a1, a2, ..., an (0 ≤ ai ≤ 100), where ai is the score earned by the participant who got the i-th place. The given sequence is non-increasing (that is, for all i from 1 to n - 1 the following condition is fulfilled: ai ≥ ai + 1).

Output
Output the number of participants who advance to the next round.

Examples
inputCopy
8 5
10 9 8 7 7 7 5 5
outputCopy
6
inputCopy
4 2
0 0 0 0
outputCopy
0
*/

/*
Idea : Go to the kth position, and then traverse left if you had found 0 (hoping having some more 0s in the left), else traverse right (hoping you find same number on the right).
This works, as they have told the order is in non-increasing order, if not, then brute was the only way!!
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
	int n,k;
	cin>>n>>k;

	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(a[k-1]==0)
	{
		int res=k;
		k=k-1;
		while(k>=0 && (a[k]==0))
		{
			res--;
			k--;
		}
		cout<<res<<endl;
	}
	else{
		int res=k;
		int num=a[k-1];
		while((k)<n && (a[k]==num))
		{
			k++;
			res++;
		}
		cout<<res<<endl;
	}



}