/*              5.SHAZAM!
Shazam defeated Sivana.But Sivana managed to escape. Shazam has to solve a puzzle to reach to Sivana. The puzzle includes picking 2 numbers whose number of divisors are odd. Like 9 has 3(odd) divisors 1,3 and 9. If there are no possible numbers, Shazam loses. Help Shazam!
Remember, there is no partial marking in this question.

Input Format

First line contains n, the number of given numbers.
In the next n lines, ith line contains an integer, ai.

Constraints

1<=n<=10
1<=ai<=1018

Output Format

Print REACHED if Shazam manages to reach Sivana.
Print LOSE if Shazam cannot reach Sivana.

Sample Input 0

2
3
9

Sample Output 0

LOSE

Explanation 0

3 has two divisors 1 and 3
9 has three divisors 1,3 and 9.
So, 3 has even number of divisors and 9 has even number of divisors.
We need 2 numbers with odd number of divisors. But there is only one. So, output will be LOSE.
*/
//  *****************  PROGRAM CODE  *****************************s

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;


int main() {
    ll t,ans=0;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll s=sqrt(n);
        if(s*s==n)
            ans++;
    }
    if(ans>=2)
        cout<<"REACHED"<<endl;
    else cout<<"LOSE"<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
