#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> find_nth_row(int n)
{
    vector<vector<int>> res;
    for (int i=0;i<n;i++)
    {
        int row_size = i+1;
        vector<int> ith_row(row_size);
        ith_row[0] = 1;
        ith_row[row_size-1] = 1;
        
        for (int j=1;j<row_size-1;j++)
        {
            ith_row[j] = res[i-1][j-1] + res[i-1][j];
        }
        res.push_back(ith_row);
    }

    return res;
}
int main() {
    // Write this Optionally, if you are taking input from file(input.txt) and putting it to a file(output.txt)
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //
    
    int n;
    cin>>n;

    vector<vector<int>> ans = find_nth_row(n);

    for (int i=0;i<ans.size();i++)
    {
        for (int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}