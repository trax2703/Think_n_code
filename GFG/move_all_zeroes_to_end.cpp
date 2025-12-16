/*
    Question:
    You are given an array arr[] of non-negative integers.
    You have to move all the zeros in the array to the right end while maintaining the relative order of the non-zero elements.
    The operation must be performed in place, meaning you should not use extra space for another array.

    Examples:

    Input: arr[] = [1, 2, 0, 4, 3, 0, 5, 0]
    Output: [1, 2, 4, 3, 5, 0, 0, 0]
    Explanation: There are three 0s that are moved to the end.
    Input: arr[] = [10, 20, 30]
    Output: [10, 20, 30]
    Explanation: No change in array as there are no 0s.
    Input: arr[] = [0, 0]
    Output: [0, 0]
    Explanation: No change in array as there are all 0s.
    Constraints:
    1 ≤ arr.size() ≤ 10^5
    0 ≤ arr[i] ≤ 10^5

    Idea:
    Maintain two pointers, left and right...ensure left points always to non-zero and right
    points always to zero, and swap it!! ===> This would give ulta order of the elements which will be swapped.

    
*/
#include <bits/stdc++.h>

using namespace std;

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

    int arr[n];

    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int left_ptr = 0;
    int right_ptr = n-1;

    while(left_ptr < right_ptr)
    {
        while(left_ptr < right_ptr && left_ptr < n && arr[left_ptr] > 0)
        {
            left_ptr++;
        }

        while(right_ptr > left_ptr && right_ptr > 0 && arr[right_ptr] == 0 && right_ptr > left_ptr)
        {
            right_ptr--;
        }

        if (left_ptr < right_ptr)
        {
            arr[left_ptr] = arr[left_ptr] ^ arr[right_ptr];
            arr[right_ptr] = arr[left_ptr] ^ arr[right_ptr];
            arr[left_ptr] = arr[left_ptr] ^ arr[right_ptr];
        }
    }

    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}