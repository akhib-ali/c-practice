#include<stdio.h>
void main()
{
  int i,a[10],n;
  n=5;
  printf("\nenter the elements");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(int j =n-1;j>=0;j--)
  {
    printf("%d\t",a[j]);
  }
}