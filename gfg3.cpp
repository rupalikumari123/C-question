// Given a string S, check if it is palindrome or not.

// Example 1:

// Input: S = "abba"
// Output: 1
// Explanation: S is a palindrome
// Example 2:

// Input: S = "abc" 
// Output: 0
// Explanation: S is not a palindrome
// Your Task:
// You don't need to read input or print anything. Complete the function isPalindrome()which accepts string S and returns an integer value 1 or 0.

// Expected Time Complexity: O(Length of S)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= Length of S<= 2*105


#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int isPalindrome(string S)
    {
       int s=0;
       int e= S.length()-1;
       while(s<=e){
          if(S[s]!= S[e]){
              return 0;
          } 
          else{
              s++;
              e--;
          }
       }
       return 1;
    }
    int main(){
        int t;
        scanf("%d",&t);
        while(t--){
            char s[200005];
            scanf("%s",&s);
            if (isPalindrome(s)) printf("1\n");
            else{
            printf("1\n");
        }
        return 0;
        
    }
