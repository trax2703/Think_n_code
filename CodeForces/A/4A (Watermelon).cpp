/*Question:
One hot summer day Pete and his friend Billy decided to buy a watermelon. They chose the biggest and the ripest one, in their opinion. After that the watermelon was weighed, and the scales showed w kilos. They rushed home, dying of thirst, and decided to divide the berry, however they faced a hard problem.

Pete and Billy are great fans of even numbers, that's why they want to divide the watermelon in such a way that each of the two parts weighs even number of kilos, at the same time it is not obligatory that the parts are equal. The boys are extremely tired and want to start their meal as soon as possible, that's why you should help them and find out, if they can divide the watermelon in the way they want. For sure, each of them should get a part of positive weight.

Input
The first (and the only) input line contains integer number w (1 ≤ w ≤ 100) — the weight of the watermelon bought by the boys.

Output
Print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and NO in the opposite case.

Examples
inputCopy
8
outputCopy
YES*/

/*Idea:
Any Even Number can be expressed in the form of 2k+2 (one part is 2k, other is 2 :- both are even), the condition according to the problem is 2k>0, hence k has to be greater than or equal to 1. Hence, the exception for us would be 2.
*/

//Code

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

	if(n==2){
		cout<<"NO"<<endl;
	}
	else if((n&1)){
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;
	}

}