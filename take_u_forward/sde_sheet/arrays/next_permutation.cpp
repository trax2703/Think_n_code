#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
void in_place_next_permutation(vector<int>& arr)
{
    int find_dip_index = 0;
    int max_idx = arr.size();

    for (int i=max_idx-1;i>=1;i--)
    {
        if (arr[i] > arr[i-1])
        {
            find_dip_index = i;
            break;
        }
    }

    cout<<"dip_index "<<find_dip_index<<endl;
    if (find_dip_index == 0)
    {
        // It means the array pattern is in descending order
        for (int i=0;i<max_idx/2;i++)
        {
            swap(&arr[i], &arr[max_idx-i-1]);            
        }
    }
    else
    {
        int ref = arr[find_dip_index - 1];
        int idx_just_greater_than_ref;
        for (int i=max_idx-1; i>=find_dip_index; i--)
        {
            if (arr[i] > ref)
            {
                idx_just_greater_than_ref = i;
                break;
            }
        }

        cout<<idx_just_greater_than_ref<<endl;
        swap(&arr[idx_just_greater_than_ref], &arr[find_dip_index - 1]);

        int start = find_dip_index, end = max_idx-1;

        while(start < end)
        {
            swap(&arr[start++], &arr[end--]);
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

    vector<int> arr(n);

    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Hello World"<<endl;
    in_place_next_permutation(arr);

    cout<<"Hello World"<<endl;
    for (int i=0; i<n ;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}