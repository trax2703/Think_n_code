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
		int max_sum=INT_MIN;
		int max_sum_num;
		for(int i=2;i<=n;i++)
		{
			int local_sum=0;
			int mul=1;
			while(i*mul<=n)
			{
				local_sum+=i*mul;
				mul++;
			}
			if(local_sum>max_sum)
			{
				max_sum=local_sum;
				max_sum_num=i;
			}
		}
		cout<<max_sum_num<<endl;
	}


}