

#include<stdio.h>
int main()
{
 int i,j,sum=0,n;
 int d[20];
 int disk;   //loc of head
 int temp,max;     
 int dloc;   //loc of disk in array

 int r;
  printf("****Scan Algorithm****\n\t");

 printf("enter number of location:\t");
 
 scanf("%d",&n);
printf("Enter Range:");
scanf("%d",&r);
r--;

 printf("enter position of head:\t");
 scanf("%d",&disk);
 printf("enter elements of disk queue:\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&d[i]);
 }
 d[n]=disk;
 n=n+1;
 int  ch;
 printf("disk scan(left-0 /right-1):");
 scanf("%d",&ch);
 for(i=0;i<n;i++)    // sorting disk locations
 {
  for(j=i;j<n;j++)
  {
    if(d[i]>d[j])
    {
    temp=d[i];
    d[i]=d[j];
    d[j]=temp;
    }
  }
 }
 max=d[n-1];
 for(i=0;i<n;i++)   // to find loc of disc in array
 {
 if(disk==d[i]) { dloc=i; break;  }

 }
 if(ch==0)
 {
 for(i=dloc;i>=0;i--)
 printf("%d -->",d[i]);
 printf("0 -->");
 for(i=dloc+1;i<n-1;i++)
 printf("%d-->",d[i]);
  printf("%d",d[i]);

  sum=disk+max;

 }
 else if(ch==1)
 {
     for(i=dloc;i<n;i++)
         printf("%d -->",d[i]);
         printf("%d-->",r);
         
     for(i=dloc-1;i>0;i--)
     printf("%d-->",d[i]);
     printf("%d",d[i]);

     sum=r-d[0]+r-disk;
     
 }
       printf("\nmovement of total cylinders %d",sum);
 
 return 0;
}