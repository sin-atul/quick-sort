#include<stdio.h>
#include<conio.h>
int partition(int a[], int beg , int end);
void quicksort(int a[], int beg , int end);
int main()
{
int arr[100],i,n;
printf("\n enter the number :");
scanf("%d",&n);
printf("\n enter the element :");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
quicksort(arr , 0 , n-1);
printf("\n the sorted array : ");
for(i=0;i<n;i++)
printf("%d\t", arr[i]);
getch();
return 00;
}
int partition(int a[] , int beg , int end)
{
int left, right, temp, loc, flag;
loc=left=beg;
right=end;
flag=0;
while(flag!=1)
{
while((a[loc]<=a[right])&&(loc!=right))
right--;
if(loc == right)
flag = 1;
else if(a[loc]>a[right])
{
temp = a[loc];
a[loc]=a[right];
a[right]=temp;
loc=right;
}
if(flag!=1)
{
while((a[loc]>=a[left])&&(loc!=left))
left++;
if(loc == left)
flag = 1;
else if(a[loc]<a[left])
{
temp=a[loc];
a[loc]=a[left];
a[left]=temp;
loc=left;
}
}
}
return loc;
}
void quicksort(int a[], int beg, int end)
{
int loc;
if(beg<end)
{
loc=partition(a,beg,end);
quicksort(a,beg,loc-1);
quicksort(a,loc+1,end);
}
}
