#include <stdio.h>

int sum(int num)
{ int  sum = 0, rem = 0;
while (num != 0)
    {
      rem = num % 10;
      sum = sum + rem;
      num = num / 10;
    
    }
      return(sum);
}

int count( int n)
{  int count=0;
    while (n != 0)
   {    n =n/ 10;     // n = n/10
        count++;
   }
       return (count);
  }
int main ()
{ int num = 1599 , result =0 , c=0,b=7,d=6;
int a=b+d;
  result = sum(num);
  c= count(result);
  while(c>1)
   { result = sum(result);
   c= count(result);
   }
  
   printf("sum = %d  ", result);
   //printf("count = %d" , c);
   return 0;
}
   
     
   

