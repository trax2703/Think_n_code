/*
Question:
You are given an array consisting of n integers. Your task is to determine whether it is 
possible to color all its elements in two colors in such a way that the sums of the elements of both colors have the same parity and each color has at least one element colored.

For example, if the array is [1,2,4,3,2,3,5,4], we can color it as follows: [1,2,4,3,2,3,5,4], where the sum of the blue elements is 6 and the sum of the red elements is 18.

Input
The first line contains an integer t
 (1≤t≤1000) — the number of test cases.

Each test case begins with a line containing an integer n
 (2≤n≤50) — the length of the array a.

The next line contains n
 integers a1,a2,…,an (1≤ai≤50) — the elements of the array a.

Output
For each test case, output "YES" (without quotes) if it is possible to color the array in two colors in such a way that the sums of the elements of both colors have the same parity and each color has at least one element colored, and "NO" otherwise.

You can output "Yes" and "No" in any case (for example, the strings "yES", "yes", and "Yes" will be recognized as correct answers).

Example
inputCopy
7
8
1 2 4 3 2 3 5 4
2
4 7
3
3 9 8
2
1 7
5
5 4 3 2 1
4
4 3 4 5
2
50 48
outputCopy
YES
NO
YES
YES
NO
YES
YES
*/

/*
Idea: Here, Parity means even/odd.
Odd + Odd => Even
Even + Even => Even
Odd + Even => Odd

First, lets only consider Odd numbers
Now, if Odd numbers are in even number then result(sum) is also even.
Now, lets consider number of odd numbers are more then 2 and is even, then we can split into two odd numbers and in other set
there is even number of odd numbers again.
So, both the set will again become even parity.

At this point, consider Even numbers into picture
Add them anywhere you always get even number itself :)

If only even numbers are there then dividing them always give the same parity.

Now, One Case left is If Odd numbers are 2, then we can still splt them into two sets have odd number in each of the set.
Then both the set becomes Odd Parity.

The remaining scenario is, If odd numbers are Odd, then its never a possibility to
split into two sets of same parity. Hope this is clear :)
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

		int no_of_odd_numbers=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]&1)
			{
				no_of_odd_numbers++;
			}
		}

		if((no_of_odd_numbers & 1)==0) //Check for even
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}



}