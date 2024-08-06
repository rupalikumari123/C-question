#include<stdio.h>
#include<math.h>
int main(){
int a,b,c;
float s,area;
printf("Enter three sides of the scalene traingle : ");
scanf("%d%d%d",&a,&b,&c);

if(a+b>c && b+c>a && c+a>b){
s=(a+b+c)/2.0;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("Area of scalene triangle is : %f\n",area);
}
else {
    printf("Area is not possible");
}
return 0;
}