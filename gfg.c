// Given an array arr of n integers. Your task is to write a program to find the maximum value of ∑arr[i]*i, where i = 0, 1, 2,., n-1. You are allowed to rearrange the elements of the array.

// Note: Since the output could be large, print the answer modulo 109+7.

// Examples :

// Input : arr[] = [5, 3, 2, 4, 1]
// Output : 40
// Explanation: If we arrange the array as 1 2 3 4 5 then we can see that the minimum index will multiply with minimum number and maximum index will multiply with maximum number. So, 1*0 + 2*1 + 3*2 + 4*3 + 5*4 = 0+2+6+12+20 = 40 mod(109+7) = 40

// Input : arr[] = [1, 2, 3]
// Output : 8
// Expected Time Complexity: O(nlog(n))
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ arr.size ≤ 105
// 1 ≤ arri ≤ 105



#include<stdio.h>
int main(){
    int i,temp,arr[10],result;
    printf("Enter the 10 values");
    for(int i=0;i<10;i++)
scanf("%d",&arr[i]);
for(i=0;i<9;i++)
    for(int j=i+1;j<=9;j++)
    if(arr[i]>arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
        printf("sorted array elements ");
        for(i=0;i<10;i++){
            result=arr[i]*i;
            printf("%d\n",result);
        
        }
    
    

    
        return 0;
    }
