#include <iostream>
using namespace std;
void reverse(int arr[],int first, int last, int n);
void swap(char *a,char *b);
int main() {
	int arr[] = {1,2,3,4};
	int n =  sizeof(arr)/sizeof(arr[0]);
	reverse(arr,0,n-1,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void reverse(int arr[],int first, int last, int n){

    if(first>=last)
       {
		 return;
	   }
	swap(arr[first],arr[last]);
    reverse(arr,first+1,last-1,n);
    
}
void swap(int *a,int *b)
{
	char temp=*a;
	*a=*b;
	*b=temp;
}
