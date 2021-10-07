#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i=0,n=0,mid=0,low=0,high=0,temp,key;
//int j=0; if sorted list is recomended
clrscr();
printf("\n Enter no. of elements in the array : ");
scanf("%d",&n);
printf("\n Enter the elements :");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
/* printf("\n %d",a[i]);
    for(i=0;i<n;i++)
    {
     for(j=i+1;j<n;j++)
     {
      if(a[i]>a[j])
      {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
      }
     }
    }
printf("\n Sorted list is :");
for(i=0;i<n;i++)
printf("\n %d",a[i]);*/
printf("\n Enter the key element : ");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
 mid=(low+high)/2;
 if(a[mid]==key)
 break;
 if(a[mid]>key)
 high=mid-1;
 else
 low=mid+1;
}
if(low>high)
printf("\n Element not found");
else
printf("\n Element Found");
getch();
}