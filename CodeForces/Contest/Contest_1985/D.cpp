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
		int n,m;
		cin>>n>>m;
		char a[n][m];
		int x_min=INT_MAX, x_max=INT_MIN;
		int y_min=INT_MAX, y_max=INT_MIN;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
				if(a[i][j]=='#')
				{
					x_min=min(x_min, i);
					x_max=max(x_max, i);
					y_min=min(y_min, j);
					y_max=max(y_max, j);
				}
			}
		}
		cout<<((x_min+x_max)/2+1)<<" "<<((y_min+y_max)/2+1)<<endl;
	}


}