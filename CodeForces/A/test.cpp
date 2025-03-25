#include <bits/stdc++.h>
using namespace std;

#define NUMBER 1;

int main()
{
	// Write this Optionally, if you are taking input from file(input.txt) and putting it to a file(output.txt)
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	//
	

	string a = "GattXpanServerNotifySupportedWifiChannels";
	string b = "GattXpanServerNotifySupportedWiFiChannels";

	for (int i=0;a[i]!='\0';i++)
	{
		printf("%d %d\n", a[i], b[i]);
	}


}