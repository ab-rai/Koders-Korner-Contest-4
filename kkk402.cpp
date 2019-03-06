/*              2.MATHS WARMUP

After selection in K3, students were invited for interview. The interviewer has decided to check their mathematics skills. He has given a series. He wants the students to find the sum of the series.

The series is:
1 7 17 31 49 .......

Input Format

The first and only line contains and integer n.

Constraints

1<=n<=1000000

Output Format

Print the nth term and sum of n terms separated by spaces.

Sample Input 0

2    

Sample Output 0

7 8

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
    ll n,sum=0;
    cin>>n;
    // for(int i=1;i<=n;i++){
    // //cout<<"sum="<<sum<<endl;
    // sum+=(2*(i*i)-1);
    //   //  cout<<"sum="<<sum<<endl;
    // }
    ll small=(n*(n+1)*(2*n+1))/6;
   // cout<<"small="<<small<<endl;
    sum=2*(small)-n;
    cout<<2*(n*n)-1<<" "<<sum<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
