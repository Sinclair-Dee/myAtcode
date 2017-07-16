#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cin >>n;
    int l[n];
	long long sum = 0;
    for (i = 0;i<n;i++){
	cin>>l[i];
	sum +=l[i];
    }
    // operation procssing
	long long sum0 = 0;
	long long temp =	1000000000000000;
	for(i= 0;i<n-1;i++){
		sum0 +=l[i];
	if(2*sum0-sum>=0)
		temp= (2*sum0-sum)<temp?(2*sum0-sum):temp;
	else 
		temp= (sum-2*sum0)<temp?(sum-2*sum0):temp;
	}
	cout<<temp<<endl;
    return 0;
}