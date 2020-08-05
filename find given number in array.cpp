#include <iostream>
using namespace std;
bool find(int arr[], int i, int num, int n);
int main() {
	
	int arr[] = {1,-2, 3, 4, -5};
	int num = 9;
	int n =  sizeof(arr)/sizeof(arr[0]);
	cout<<find(arr,0,num,n);
	
}
bool find(int arr[], int i, int num, int n){
    
    if(i==n)
    {
    	return 0;
	}
	if(arr[i]==num)
	{
		return 1;
	}
	find(arr,i+1,num,n);
}
