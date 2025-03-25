#include <bits/stdc++.h>
using namespace std;

struct test
{
    short a;
    short b;
    int c;
    short d;
    char e;
};
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
    struct test t;
    cout<<"Hello World!!"<<n<<endl;

    cout<<"Size of struct test: "<<sizeof(t)<<endl;
}