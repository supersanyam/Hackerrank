/*
DISCLAIMER : I got only 50/100 in this ! I am working to get this fixed asap
https://www.hackerrank.com/contests/projecteuler/challenges/euler002/copy-from/1304895195
This problem is a programming version of Problem 2 from projecteuler.net

Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with  and , the first  terms will be:

By considering the terms in the Fibonacci sequence whose values do not exceed , find the sum of the even-valued terms.

Input Format

First line contains  that denotes the number of test cases. This is followed by  lines, each containing an integer, .

Constraints

Output Format

Print the required answer for each test case.

Sample Input 0

2
10
100
Sample Output 0

10
44
Explanation 0

For , we have , sum is .
For , we have , sum is .
*/
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>


using namespace std;
 
int fib(int n)
{
  /* Declare an array to store Fibonacci numbers. */
  //int f[n+1];
  long long i=1;
  int sum=0;
  /* 0th and 1st number of the series are 0 and 1*/
  long long f0 = 2;
  long long f1 = 8;
  long long f2=0;
  while(f1<=n)
  {
      /* Add the previous 2 numbers in the series
         and store it */
         //cout<<f[i]<<" ";
         sum+=f1;
 
      f2 = 4*f1 + f0;
      f0=f1;
      f1=f2;
  }
  return sum+2;
 
}
 
int main ()
{ long long t,n;
	cin>>t;
	while(t--){
		cin>>n;
  		cout<<fib(n)<<"\n";
	}
  	return 0;		
}
