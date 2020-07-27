#include <iostream>
using namespace std;
int sumofdigits(int n);
int main() {
	int n;
	cin>>n;
	cout<<sumofdigits(n);
}
int sumofdigits(int n){
	int sum=0;
    if(n/2==1)
    {
    	return n;
	}
	while(n)
	{
	  sum+=(n%10);
	  n=n/10;
    }
	return sumofdigits(sum); 
}





/*

#include <iostream>
#include<string.h>
using namespace std;
string sumofdigits(string p);
int main() {
    string n,p="";
    int k;
    cin>>n>>k;
    while(k--)
    {
        p=p+n;
    }
    cout<<sumofdigits(p);
}
string sumofdigits(string p){
	int sum=0,n =p.length(),i=n-1;
    if(n==1)
    {
        return p;
    }
    while(i--)
    {
      sum+=(p[i]-'0');
    }
    string temp=to_string(sum);
    return sumofdigits(temp); 
}*/
