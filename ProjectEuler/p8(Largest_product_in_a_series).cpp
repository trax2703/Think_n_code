#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll find_prod_13(char a[], int i)
{
	int cnt=13,x=i;
	ll res=1;
	while(cnt--)
	{
		//cout<<a[x]-'0'<<endl;
		res = res*(a[x++]-'0');
	}
	return res;
}
int main()
{
	// Write this Optionally, if you are taking input from file(input.txt) and putting it to a file(output.txt)
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	//

	char a[1001];
	scanf("%s",a);

	ll res=0;
	for(int i=0;i<1000-13;i++)
	{
		res = max(res,find_prod_13(a,i));
	}
	cout<<res<<endl;




}