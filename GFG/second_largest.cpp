/* Question 
Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

Note: The second largest element should not be equal to the largest element.

Examples:

Input: arr[] = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34.
Input: arr[] = [10, 5, 10]
Output: 5
Explanation: The largest element of the array is 10 and the second largest element is 5.
Input: arr[] = [10, 10, 10]
Output: -1
Explanation: The largest element of the array is 10 and the second largest element does not exist.
Constraints:
2 ≤ arr.size() ≤ 10^5
1 ≤ arr[i] ≤ 10^5
Expected Complexities
Time Complexity: O(n)
Auxiliary Space: O(1)
*/

/* Idea
    Maintain two variables max and second_max which can track the values accordingly
*/
#include <bits/stdc++.h>
using namespace std;

int getSecondLargest(vector<int> arr)
{
    int n = arr.size();
    int max = arr[0], second_max = -1;
    for (int i=1; i<n; i++)
    {
        if (arr[i] > max)
        {
            second_max = max;
            max = arr[i];
        }
        else if (arr[i] > second_max && arr[i]<max)
        {
            second_max = arr[i];
        }
    }
    return second_max;
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

    cout<<getSecondLargest(v)<<endl;
}