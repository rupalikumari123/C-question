// Given a positive integer n, find the nth fibonacci number. Since the answer can be very large, return the answer modulo 1000000007.

// Note: for the reference of this question take first fibonacci number to be 1.

// Examples :

// Input: n = 2
// Output: 1 
// Explanation: 1 is the 2nd number of fibonacci series.
// Input: n = 5
// Output: 5
// Explanation: 5 is the 5th number of fibonacci series.
// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(n)

// Constraints:
// 1<= n <=105


#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        if (n== 1 || n == 2 )
        return 1 ;
        int a = 1 , b = 1  , c ;
        for (int i = 3 ; i <= n ; i++){
            c = (a + b)%1000000007;
            a = b  ;
            b = c ;
        }
        
       return c ; 
        
        
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solution ob;
        cout <<ob.nthFibonacci(n)<<endl;

    }
    return 0;
    
}
