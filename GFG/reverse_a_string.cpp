/*
Question : 
You are given a string s. You need to reverse the string.

Example 1:

Input:
s = Geeks
Output: skeeG
Example 2:

Input:
s = for
Output: rof
Your Task:

You only need to complete the function reverseWord() that takes s as parameter and returns the reversed string.

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).

Constraints:
1 <= |s| <= 10000
*/

/*
Idea : Traverse half of the array by swapping, the first and last, second and second last,......
*/
#include <bits/stdc++.h>
using namespace std;

void swap(char* a, char* b)
{
	*a=(*a)^(*b);
	*b=(*a)^(*b);
	*a=(*a)^(*b);
}
int main()
{
	// Write this Optionally, if you are taking input from file(input.txt) and putting it to a file(output.txt)
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	//

	char a[10001];
	scanf("%s",a);

	int n = strlen(a);
	int n_iter = n>>1;

	for(int i=0;i<n_iter;i++)
	{
		swap(&a[i],&a[n-1-i]);
	}

	printf("%s\n",a);
}