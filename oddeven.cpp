
// Given a positive integer n, determine whether it is odd or even. Return a string "even" if the number is even and "odd" if the number is odd.

// Examples:

// Input: n = 15
// Output: odd
// Explanation: The number is not divisible by 2
// Input: n = 44
// Output: even
// Explanation: The number is divisible by 2
// Expected Time Complexity: O(1)
// Expected Auxiliary Space: O(1)

// Constraints:
// 0 <= n <= 104

#include<stdio.h>
const char* oddEven(int N) {
    if(N%2==0){
        return "even";
    }
        else{
            return "odd";
        }
    
    }
int main(){
int t;
scanf("%d",&t);
while(t--){
int N;
scanf("%d",&N);
printf("%s",oddEven(N));
}
return 0;
}