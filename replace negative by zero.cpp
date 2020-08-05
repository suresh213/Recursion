#include <iostream>
using namespace std;
void replace(int arr[],int i,int n);
int main() {
	
	int arr[] = {1,-2, 3, 4, -5};
	int n =  sizeof(arr)/sizeof(arr[0]);
	replace(arr,0,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void replace(int arr[], int i, int n){
    
    if(i==n)
    {
    	return;
	}
	if(arr[i]<0)
	{
		arr[i]=0;
	}
	replace(arr,i+1,n);
}
