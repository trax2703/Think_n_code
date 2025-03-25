/*
Question: (Wonderful)
You are given an array a of n integers. Count the number of pairs of indices (i,j)
such that i<j and a[j]−a[i]=j−i.

Input
The first line contains one integer t (1≤t≤10^4). Then t test cases follow.

The first line of each test case contains one integer n (1≤n≤2⋅10^5).

The second line of each test case contains n integers a1,a2,…,an(1≤ai≤n) — array a.

It is guaranteed that the sum of n over all test cases does not exceed 2⋅10^5.

Output
For each test case output the number of pairs of indices (i,j) such that i<j and a[j]−a[i]=j−i.

Example
inputCopy
4
6
3 5 1 4 6 6
3
1 2 3
4
1 3 3 4
6
1 6 3 4 5 6
outputCopy
1
3
3
10
*/

/*
Idea : The main point here is a[j]-a[i]=j-i
If we think, we feeel we can never do less that O(n^2)
But, just by rewriting the equation:
a[j]-j = a[i]-i
So, the value-index is the cache :)
for every index Ill calculate value-index and then create a hash of the frequency for every value-index.
Lets consider h{diff, freq} as hash map. diff is value-index
For every diff[i]=> we can have the combinations C(freq[i],2) bcause we choose any two diff pakka there will be i and j which are diffent so
one will be small and other one big (Hence, i<j one pair we will get).
Addition for every diff[i] will be the result.
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
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			a[i]=a[i]-i;
		}
		map<int,int> m;
		for(int i=0;i<n;i++)
		{
			if(m.find(a[i])==m.end())
			{
				m[a[i]]=0;
			}
			m[a[i]]++;
		}
		long long res=0;
		for(auto it=m.begin(); it!=m.end(); it++)
		{
			long long freq = it->second;
			res+=(freq*(freq-1))>>1;
		}
		cout<<res<<endl;
	}


}