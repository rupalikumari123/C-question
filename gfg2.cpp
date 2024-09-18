// Given an expression string x. Examine whether the pairs and the orders of {,},(,),[,] are correct in exp.
// For example, the function should return 'true' for exp = [()]{}{[()()]()} and 'false' for exp = [(]).

// Note: The driver code prints "balanced" if function return true, otherwise it prints "not balanced".

// Examples :

// Input: {([])}
// Output: true
// Explanation: { ( [ ] ) }. Same colored brackets can form balanced pairs, with 0 number of unbalanced bracket.
// Input: ()
// Output: true
// Explanation: (). Same bracket can form balanced pairs,and here only 1 type of bracket is present and in balanced way.
// Input: ([]
// Output: false
// Explanation: ([]. Here square bracket is balanced but the small bracket is not balanced and Hence , the output will be unbalanced.
// Expected Time Complexity: O(|x|)
// Expected Auixilliary Space: O(|x|)

// Constraints:
// 1 ≤ |x| ≤ 105


#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
  bool ispar(string x) {
        int len = 0;
        for(char ch: x) {
            if(ch == '{' || ch == '(' || ch == '[') 
                x[len++] = ch;
            else if(ch == '}' && x[len-1] == '{') 
                len--;
            else if(ch == ')' && x[len-1] == '(') 
                len--;
            else if(ch == ']' && x[len-1] == '[') 
                len--;
            else 
                return false;
        }
        return len == 0;
    }

};
int main(){
    int t;
    string a;
    cin>>t;
    while(t--){
        cin>>a;
        solution obj;
        if(obj.ispar(a))
        cout<<"balanced"<<endl;
        elsecout<<"not balanced"<<endl;
        
    }

}