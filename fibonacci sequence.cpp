#include <iostream>
using namespace std;
int fibo(int n);
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	     cout<<fibo(i)<<" ";
}
int fibo(int n){
	if(n<=1)
	   return n;
    return fibo(n-2)+fibo(n-1);
}


