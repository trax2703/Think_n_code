/*
Question:
Vladislav has a string of length 5, whose characters are each either A or B.

Which letter appears most frequently: A or B?

Input
The first line of the input contains an integer t (1≤t≤32) — the number of test cases.

The only line of each test case contains a string of length 5 consisting of letters A and B.

All t strings in a test are different (distinct).

Output
For each test case, output one letter (A or B) denoting the character that appears most frequently in the string.

Example
inputCopy
8
ABABB
ABABA
BBBAB
AAAAA
BBBBB
BABAA
AAAAB
BAAAA
outputCopy
B
A
B
A
B
A
A
A
*/

/*
Idea: Count A's, If it is more than or equal to 3, then print A, else print B.
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

    int t;
    cin>>t;
    while(t--)
    {
        char a[6];
        scanf("%s",a);

        int count_a=0;
        for(int i=0;i<6;i++)
        {
            if(a[i]=='A')
            {
                count_a++;
            }
        }
        if(count_a>=3)
        {
            cout<<"A"<<endl;
        }
        else
        {
            cout<<"B"<<endl;
        }
    }


}
