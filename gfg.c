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