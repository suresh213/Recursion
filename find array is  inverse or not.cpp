#include <iostream>
using namespace std;
bool inverse(int arr[], int first, int last, int n);
int main() {
	
	int arr[] = {4,7,3,2,2,3,7,4};
	int n =  sizeof(arr)/sizeof(arr[0]);
	cout<<inverse(arr,0,n-1,n);
}
bool inverse(int arr[], int first, int last, int n){
	
    if(first <= last)
    {
	    if(arr[first]!=arr[last])
		{
			return 0;
		}
		inverse(arr,first+1,last-1,n);
	}
	else{
		return 1;
	}
	
}
