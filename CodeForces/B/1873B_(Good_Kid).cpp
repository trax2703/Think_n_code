/*
Question:
Slavic is preparing a present for a friend's birthday. He has an array a
 of n digits and the present will be the product of all these digits. Because Slavic is a good kid who wants to make the biggest product possible, he wants to add 1
 to exactly one of his digits.

What is the maximum product Slavic can make?

Input
The first line contains a single integer t
 (1≤t≤104) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤9) — the number of digits.

The second line of each test case contains n
 space-separated integers ai (0≤ai≤9) — the digits in the array.

Output
For each test case, output a single integer — the maximum product Slavic can make, by adding 1
 to exactly one of his digits.

Example
inputCopy
4
4
2 2 1 2
3
0 1 2
5
4 3 2 3 4
9
9 9 9 9 9 9 9 9 9
outputCopy
16
2
432
430467210
*/

/*
Idea:
Very Nice Logic/ Info is : Given two numbers, and if given a choice to add 1 to any of the number will you add 1 to the minimum number
or you will add 1 to maximum number?

Lets asssume, two number a and b
Also, a<b
If 1 is added to a, then prod becomes (a+1)(b) = ab+b ===> This is better :)
If 1 is added to b, then prod becomes (a)(b+1) = ab+a 

Conclusion : Adding 1 to minimum number will give a good result to us, Yoooo!!!

So, here just find the minimum number and its index and just increment it by 1 and then multiply all the numbers in an Array.
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

		int a[n];
		int mini=INT_MAX;
		int mini_ind;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<mini)
			{
				mini=a[i];
				mini_ind=i;
			}
		}
		a[mini_ind]++;
		int res=1;

		for(int i=0;i<n;i++)
		{
			res*=a[i];
		}

		cout<<res<<endl;
	}


}
