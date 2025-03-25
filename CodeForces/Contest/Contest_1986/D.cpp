#include <bits/stdc++.h>
using namespace std;

void print_vec(vector<int> v)
{
	cout<<"Printing Vector"<<endl;
	for(auto it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}
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
		char a[n+1];
		scanf("%s",a);

		int mini=INT_MAX;
		for(int i=0;i<n-1;i++)
		{
			vector<int> nums;
			int j=0;
			while(j<i)
			{
				nums.push_back(a[j]-'0');
				j++;
			}
			int two_dig_num=(a[j]-'0')*10+(a[j+1]-'0');
			j+=2;
			nums.push_back(two_dig_num);
			while(j<n)
			{
				nums.push_back(a[j]-'0');
				j++;
			}
			//print_vec(nums);

			int res=nums[0];
			for(int x=1;x<nums.size();x++)
			{
				if(nums[x]==0 || nums[x]==1 || res==0 || res==1)
				{
					res=res*nums[x];
				}
				else
				{
					res+=nums[x];
				}
			}

			mini=min(mini, res);
		}
		cout<<mini<<endl;

	}

}