#include <stdio.h>
void main()
{
int size,search,num,i;
scanf("%d%d",&size,&search);
int arr[size] ;
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
if(search==arr[i])
num=i+1;
}
printf("%d",num);
}