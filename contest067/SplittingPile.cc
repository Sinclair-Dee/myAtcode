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
    // operation processing
	long long sum0 = 0;
	long long temp =	1000000000000000;
	for(i= 0;i<n-1;i++){
		sum0 +=l[i];
	temp = (std::abs(2*sum0-sum))<temp?(std::abs(2*sum0-sum)):temp;
	//可以直接调用std::abs,提交后资源占用和程序运行时间都没有什么变化，但是使程序看上去短了一些。
	//if(2*sum0-sum>=0)
	//	temp= (2*sum0-sum)<temp?(2*sum0-sum):temp;
	//else 
	//	temp= (sum-2*sum0)<temp?(sum-2*sum0):temp;
	}
	cout<<temp<<endl;
    return 0;
}