#include <bits/stdc++.h>

using namespace std;

void reverse_array(vector<int> &arr)
{
    int n = arr.size();
    for (int i=0; i<n/2; i++)
    {
        swap(arr[i], arr[n-i-1]);
    }
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

    vector<int> arr(n);

    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    reverse_array(arr);

    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}