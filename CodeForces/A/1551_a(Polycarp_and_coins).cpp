/*
Question:
Polycarp must pay exactly n burles at the checkout. He has coins of two nominal values: 1 burle and 2
burles. Polycarp likes both kinds of coins equally. So he doesn't want to pay with more coins of one type than with the other.

Thus, Polycarp wants to minimize the difference between the count of coins of 1 burle and 2 burles being used. Help him by determining two non-negative integer values c1 and c2
 which are the number of coins of 1 burle and 2 burles, respectively, so that the total value of that number of coins is exactly n
 (i. e. c1+2⋅c2=n), and the absolute value of the difference between c1
 and c2 is as little as possible (i. e. you must minimize |c1−c2|).

Input
The first line contains one integer t (1≤t≤104) — the number of test cases. Then t test cases follow.

Each test case consists of one line. This line contains one integer n (1≤n≤109) — the number of burles to be paid by Polycarp.

Output
For each test case, output a separate line containing two integers c1 and c2 (c1,c2≥0) separated by a space where c1
 is the number of coins of 1 burle and c2 is the number of coins of 2 burles. If there are multiple optimal solutions, print any one.

Example
inputCopy
6
1000
30
1
32
1000000000
5
outputCopy
334 333
10 10
1 0
10 11
333333334 333333333
1 2
Note
The answer for the first test case is "334 333". The sum of the nominal values of all coins is 334⋅1+333⋅2=1000, whereas |334−333|=1. One can't get the better value because if |c1−c2|=0, then c1=c2
 and c1⋅1+c1⋅2=1000, but then the value of c1 isn't an integer.

The answer for the second test case is "10 10". The sum of the nominal values is 10⋅1+10⋅2=30 and |10−10|=0, whereas there's no number having an absolute value less than 0.
*/

/*
Idea : First assume two stack of coins (1 burle and 2 burle) we will keep 1 burle coin in 1 burle stack, and then 2 burle coin in 2 burle stack to make 3 burles in total, so this is the best.(Greedy thinking)
		So, Any number multiples of three will have 0 coins difference.
		Now, Any other possibilities is either we will be left with filling 1 burle/ 2 burle (bcoz n%3 is 0, 1 or 2).
		So, if its 1 burle put 1 burle coin, if 2 burle put 2 burle coin.
		Note : The worst case difference between the 1/2 burle coins is 1. 
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
		int n;
		cin>>n;

		int x=n/3;
		int no_of_one_burle_coins = x;
		int no_of_two_burle_coins = x;

		if(n%3==1)
		{
			no_of_one_burle_coins++;
		}
		else if (n%3==2)
		{
			no_of_two_burle_coins++;
		}

		cout<<no_of_one_burle_coins<<" "<<no_of_two_burle_coins<<endl;
				
	}
		
}