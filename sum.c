The fundamental data types in c are int, float and char. Today, we're discussing int and float data types.

The printf() function prints the given statement to the console. The syntax is printf("format string",argument_list);. In the function, if we are using an integer, character, string or float as argument, then in the format string we have to write %d (integer), %c (character), %s (string), %f (float) respectively.

The scanf() function reads the input data from the console. The syntax is scanf("format string",argument_list);. For ex: The scanf("%d",&number) statement reads integer number from the console and stores the given value in variable .

To input two integers separated by a space on a single line, the command is scanf("%d %d", &n, &m), where  and  are the two integers.

Task

Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

Declare  variables: two of type int and two of type float.
Read  lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your  variables.
Use the  and  operator to perform the following operations:
Print the sum and difference of two int variable on a new line.
Print the sum and difference of two float variable rounded to one decimal place on a new line.
Input Format

The first line contains two integers.
The second line contains two floating point numbers.

Constraints

 integer variables 
 float variables 
Output Format

Print the sum and difference of both integers separated by a space on the first line, and the sum and difference of both float (scaled to  decimal place) separated by a space on the second line.

Sample Input

10 4
4.0 2.0
Sample Output

14 6
6.0 2.0


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum1,difference1;
float sum2,difference2;
int a,b;
float c,d;

int main()
{ 
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
	sum1=a+b;
    printf("%d ",sum1);
    difference1=a-b;
    printf("%d\n",difference1);
    sum2=c+d;
    printf("%.1f ",sum2);
    difference2=c-d;
    printf("%.1f\n",difference2);
    
    
    return 0;
}




  
