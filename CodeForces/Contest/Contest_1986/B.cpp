#include <bits/stdc++.h>
using namespace std;

int find_max_neighbour(int a[100][100], int i, int j, int n, int m)
{
	int maxi=INT_MIN;

	maxi=(i>=1)?max(maxi, a[i-1][j]):maxi;
	maxi=(j>=1)?max(maxi, a[i][j-1]):maxi;
	maxi=((i+1)<=n-1)?max(maxi, a[i+1][j]):maxi;
	maxi=((j+1)<=m-1)?max(maxi, a[i][j+1]):maxi;
	return maxi;
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
		int n,m;
		cin>>n>>m;

		int a[100][100];

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				int c = find_max_neighbour(a, i, j, n, m);
				if(a[i][j] > c)
				{
					a[i][j]=c;
				}
			}
		}

		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		
	}


}