#include<iostream>
using namespace std;

int binarySearch(int array[],int x,int low,int up)
{
if(up>=low)
{
int mid=(low+up)/2;

if(array[mid]==x)
return mid;

if(array[mid]>x)
return binarySearch(array,x,low,mid-1);
return binarySearch(array,x,mid+1,up);
}
return -1;
}

int main()
{
int array[10];
int i,n;
cout<<"\nEnter the size of an array :";
cin>>n;
cout<<"\nEnter the elements in an array:";
for(i=0;i<n;i++)
{
cin>>array[i];
}
int x;
cout<<"\nEnter the element you want to search :";
cin>>x;
int result=binarySearch(array,x,0,n-1);
if(result==-1)
cout<<"\nThe element is not found";
else
cout<<"\nThe element is found at index :"<<result;
return 0;
}
/*Output
Enter the size of an array :
5

Enter the elements in an array:10 2 4 5 6

Enter the element you want to search :4

The element is found at index :2
*/