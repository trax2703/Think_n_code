#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write this Optionally, if you are taking input from file(input.txt) and putting it to a file(output.txt)
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //
    

    int n;
    cin>>n;

    int a[31];

    a[1] = 1;
    a[2] = 2;
    for (int i=3; i<=n; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }

    cout<<a[n]<<endl;
    return 0;
}