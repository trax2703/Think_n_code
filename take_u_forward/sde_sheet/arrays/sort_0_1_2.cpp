#include <bits/stdc++.h>
using namespace std;

void swap_cus(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
void sort_0_1_2(vector<int> &v)
{
    int len = v.size();

    int two_idx = len;

    for (int i=0 ; i<two_idx; i++)
    {
        if (v[i] == 2)
        {
            while(two_idx>0 && v[two_idx -1] == 2)
            {
                two_idx--;
            }
            --two_idx;
            if (two_idx>=0 && i < two_idx)
            {
                swap_cus(&v[i], &v[two_idx]);
            }
        }
    }

    int one_idx = two_idx;
    cout<<one_idx<<endl;

    for (int i=0; i<one_idx; i++)
    {
        if (v[i] == 1)
        {
            while(one_idx>0 && v[one_idx -1] == 1)
            {
                one_idx--;
            }
            --one_idx;
            if (one_idx >=0 && i < one_idx)
            {
                swap_cus(&v[i], &v[one_idx]);
            }
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
    
    int n;
    cin>>n;

    vector<int> v(n);

    for (int i=0; i<n; i++)
    {
        int x;
        cin>>x;

        v[i] = x;
    }

    sort_0_1_2(v);

    for (auto it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    return 0;
}