#include<stdio.h>
# include<stdlib.h>
int main()
{
 float n;
  printf("please Enter a number:\n");
  scanf("%f", &n);
 if(n < 0 || n > 100)
 {
  printf("Out Of Intervals\n");
 }
 else
 {
 if(n >= 0 && n <= 25)
 {
   printf("Interval [0,25]\n");
 }
 else if(n > 25 && n <= 50)
 {
   printf("Interval (25,50]\n");
 }
 else if(n > 50 && n <= 75)
 {
   printf("Interval (50,75]\n");
 }
 else 
 {
   printf("Interval (75,100]\n");
 }
 }
   system("pause");
 return 0;
}

