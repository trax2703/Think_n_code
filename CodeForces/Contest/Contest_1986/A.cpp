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
		int a,b,c;
		cin>>a>>b>>c;

		int mini=INT_MAX;
		for(int i=1;i<=10;i++)
		{
			mini=min(mini, abs(a-i)+abs(b-i)+abs(c-i));
		}
		cout<<mini<<endl;
	}


}