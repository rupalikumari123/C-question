// Print a pattern of numbers from  to  as shown below. Each of the numbers is separated by a single space.

//                             4 4 4 4 4 4 4  
//                             4 3 3 3 3 3 4   
//                             4 3 2 2 2 3 4   
//                             4 3 2 1 2 3 4   
//                             4 3 2 2 2 3 4   
//                             4 3 3 3 3 3 4   
//                             4 4 4 4 4 4 4   
// Input Format

// The input will contain a single integer .

// Constraints


// Sample Input 0

// 2
// Sample Output 0

// 2 2 2
// 2 1 2
// 2 2 2
// Sample Input 1

// 5
// Sample Output 1

// 5 5 5 5 5 5 5 5 5 
// 5 4 4 4 4 4 4 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 4 4 4 4 4 4 5 
// 5 5 5 5 5 5 5 5 5
// Sample Input 2

// 7
// Sample Output 2

// 7 7 7 7 7 7 7 7 7 7 7 7 7 
// 7 6 6 6 6 6 6 6 6 6 6 6 7 
// 7 6 5 5 5 5 5 5 5 5 5 6 7 
// 7 6 5 4 4 4 4 4 4 4 5 6 7 
// 7 6 5 4 3 3 3 3 3 4 5 6 7 
// 7 6 5 4 3 2 2 2 3 4 5 6 7 
// 7 6 5 4 3 2 1 2 3 4 5 6 7 
// 7 6 5 4 3 2 2 2 3 4 5 6 7 
// 7 6 5 4 3 3 3 3 3 4 5 6 7 
// 7 6 5 4 4 4 4 4 4 4 5 6 7 
// 7 6 5 5 5 5 5 5 5 5 5 6 7 
// 7 6 6 6 6 6 6 6 6 6 6 6 7 
// 7 7 7 7 7 7 7 7 7 7 7 7 7 
// Language: C
// More
// 1234567891011121314151617181920212223242526
// Line: 31 Col: 1

// Test against custom input




#include<stdio.h>
int main(){
    int n,len,start,end;
    scanf("%d",&n);
    len=2*n-1;
    start=0;
    end=len-1;
    int a[len][len];
    while(n>0){
    for(int i=start;i<=end;i++){
        for(int j=start;j<=end;j++){
a[i][j]=n;
        }
    }
    start++;
    end--;
    n--;
    }
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
