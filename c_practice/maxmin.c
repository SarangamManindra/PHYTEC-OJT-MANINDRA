#include <stdio.h>
int main()
{
  int min,max,n,a[20],i,j;
  printf("enter the range: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      printf("enter the number %d: ",i+1);
      scanf("%d",&a[i]);
  }
  max=min=a[0];
  
  for(j=1;j<n;j++)
  {
      if(max<a[j])
      max=a[j];
      if(min>a[j])
          min=a[j];
  }
  printf("maxinum number is:%d\n",max);
  printf("minimum number is:%d\n",min);
}
  
