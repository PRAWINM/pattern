#include <stdio.h>
int main()
{
  int flag,array1[7]={1,2,3,4,5,6,7},array2[6]={2,10,12,23,4,5},iter_i,iter_j,iter,new_array[15],index=0;
  for(iter_i=0;iter_i<7;iter_i++)
  {
    flag=0;
    for(iter_j=0;iter_j<6;iter_j++)
    {
      if(array1[iter_i]==array2[iter_j])
      {
        flag=1;
        break;
      }
    }
    if(flag==0)
    {
      new_array[index++]=array1[iter_i];
    }
  }
  for(iter_j=0;iter_j<6;iter_j++)
  {
    flag=0;
    for(iter_i=0;iter_i<7;iter_i++)
    {
      if(array2[iter_j]==array1[iter_i])
      {
        flag=1;
        break;
      }
    }
    if(flag==0)
    {
      new_array[index++]=array2[iter_j];
    }
  }
  
  printf("{");
  for(iter=0;iter<index;iter++)
  {
    if(iter==index-1)
    printf("%d",new_array[iter]);
    else
    printf("%d ",new_array[iter]);
    
  }
  printf("}");
  printf("\ntotal=%d",index);
  return 0;
}
