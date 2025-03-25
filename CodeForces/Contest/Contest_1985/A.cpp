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
		string a,b;
		cin>>a>>b;
		char c=a[0];
		a[0]=b[0];
		b[0]=c;
		cout<<a<<" "<<b<<endl;
	}



}