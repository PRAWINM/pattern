C Program to 

1)a-reverse a number
#include <stdio.h>
int main()
{
int n,r,k;
printf("enter a number to reverse:");
scanf("%d",&n);
while(n>0)
{
r=n%10;
k=k*10+r;
n=n/10;
}
printf("%d",k);
return 0;
}

OUTPUT:
enter a number to reverse:1234
4321

b-check if the number is palindrome or not

#include <stdio.h>
int main()
 {
  int n,r,k,temp;
  printf("enter a number to reverse:");
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {
    r=n%10;
    k=k*10+r;
    n=n/10;
  }
  if(temp==k)
  printf("%d is palindrome",k);
  else
  printf("Not a palindrome");
  return 0;
}

OUTPUT:
enter a number to reverse:121
121 is palindrome

enter a number to reverse:324
Not a palindrome

2)Armstrong number or not

#include <stdio.h>
int main()
 {
  int n,r,sum=0,temp;
  printf("enter a number:");
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {
    r=n%10;
    sum=sum+r*r*r;
    n=n/10;
  }
  if(sum==temp)
  printf("%d is an Armstrong number",sum);
  else
  printf("not an armstrng number");
  return 0;
}

OUTPUT:
enter a number: 153
153 is an Armstrong number

3) A-Convert Decimal to Binary

#include <stdio.h>

int main()
 {
  int a[10],n,i;
  printf("enter a number:");
  scanf("%d",&n);
  for(i=0;n>0;i++)
  {
    a[i]=n%2;
    n=n/2;
    
  }
  for(i=i-1;i>=0;i--)
  {
    printf("%d",a[i]);
  }
  return 0;
}

OUTPUT:
enter a number: 12
1100

3) B-Convert Binary to Decimal

#include <stdio.h>

int main()
 {
  int a,n,i=1,d=0;
  printf("enter a number:");
  scanf("%d",&n);
  while(n>0)
  {
    a=n%10;
    if(a==1)
    {
      d=d+i;
    }
    i=i*2;
    n=n/10;
    
  }
  
  printf("%d",d);
  return 0;
}

OUTPUT:
enter a number:110
6

4) C program to find missing number
#include <stdio.h>
int main()
 {
  int i;
  int a[]={1,2,3,4,5,6,7,9,10};
  int n=10;
  int total=0,sum=0;
  total=(n*(n+1))/2;
  for(i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  printf("missing number is %d",total-sum);
  
  return 0;
}

OUTPUT:
missing number is 8
