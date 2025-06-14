 #include <bits/stdc++.h>
 using namespace std;
 
 vector<int> find_max_subarr(vector<int> arr)
 {
    int n = arr.size();
    vector<int> idea_prefix_sum(n+1);
    
    idea_prefix_sum[0] = 0;
    for(int i=1; i<=n; i++)
    {
        idea_prefix_sum[i] = ((idea_prefix_sum[i-1] < 0) ? 0 : idea_prefix_sum[i-1]) + arr[i-1];
    }

    for(int i=0; i<=n; i++)
    {
        cout<<idea_prefix_sum[i]<<" ";
    }
    cout<<endl;
    int max_num = INT_MIN;
    int max_idx;
    for (int i=1 ;i<=n; i++)
    {
        if (idea_prefix_sum[i] > max_num)
        {
            max_num = idea_prefix_sum[i];
            max_idx = i;
        }
    }

    cout<<max_num<<" "<<max_idx<<endl;

    int left_idx=max_idx;
    while(left_idx && idea_prefix_sum[left_idx]>0)
    {
        left_idx--;
    }
    if (left_idx != max_idx)
        left_idx++;

    cout<<left_idx-1<<"-"<<max_idx-1<<endl;
    vector<int> res;
    for(int i=left_idx-1; i<=max_idx-1; i++)
    {
        res.push_back(arr[i]);
    }
    return res;
 }

 int maxSubAddArray(vector<int> vec)
 {
    int sum=0;
    for (auto it=vec.begin(); it!=vec.end(); it++)
    {
        sum+=(*it);
    }

    return sum;
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

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<int> res;
    res = find_max_subarr(arr);

    for (auto it=res.begin(); it!=res.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<maxSubAddArray(res)<<endl;
    return 0;
 }