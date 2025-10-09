#include <bits/stdc++.h>
using namespace std;

int calc_max_profit(vector<int> v, int n)
{
    int min_ref = v[0];
    int profit = 0;

    for (int i=1; i<n; i++)
    {
        if (v[i] < min_ref)
        {
            min_ref=v[i];
        }

        profit = max(profit, v[i]-min_ref);
    }

    return profit;
}
int main()
{
    // Write this Optionally, if you are taking input from file(input.txt) and putting it to a file(output.txt)
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //

    int n;
    cin>>n;

    vector<int> v(n);

    for (int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    cout<<calc_max_profit(v, n)<<endl;

}