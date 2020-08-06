#include <iostream>
using namespace std;
int count(int arr[], int c, int i, int num, int n);
int main() {
	int arr[] = {1,2,2,3,4,1,2,1,2,1,2,1,2,1};
	int n =  sizeof(arr)/sizeof(arr[0]);
	int num=1;
	cout<<count(arr,0,0,num,n);

}
int count(int arr[], int c, int i, int num, int n){

    if(i==n)
       {
		 return c;
	   }
	if(arr[i]==num)
	{
		c++;
	}
    return count(arr,c,i+1,num,n);    
}
