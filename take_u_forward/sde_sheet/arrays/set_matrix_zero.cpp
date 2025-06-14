#include <bits/stdc++.h>
using namespace std;

void set_zeroes(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> row_zero;
    vector<int> col_zero;

    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if (matrix[i][j]==0)
            {
                int idx;
                idx = row_zero.size()-1;
                if (idx == -1 || row_zero[idx] != i)
                {
                    row_zero.push_back(i);
                }
                idx = col_zero.size()-1;
                if (idx == -1 || col_zero[idx] != j)
                {
                    col_zero.push_back(j);
                }
            }
        }
    }

    for (auto it=row_zero.begin();it!=row_zero.end();it++)
    {
        for (int j=0;j<m;j++)
        {
            matrix[*it][j] = 0;
        }
    }

    for (auto it=col_zero.begin();it!=col_zero.end();it++)
    {
        for (int i=0;i<n;i++)
        {
            matrix[i][*it] = 0;
        }
    }
}
int main() {
    // Write this Optionally, if you are taking input from file(input.txt) and putting it to a file(output.txt)
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //
    
    vector<vector<int>> matrix;
    int n,m;
    cin>>n>>m;

    for (int i=0;i<n;i++)
    {  
        vector<int> temp;
        for (int j=0;j<m;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        matrix.push_back(temp);
    }

    set_zeroes(matrix);

    for (auto it=matrix.begin();it!=matrix.end();it++)
    {
        for (auto it1=(*it).begin();it1!=(*it).end();it1++)
        {
            cout<<*it1<<" ";
        }
        cout<<endl;
    }

    return 0;
}