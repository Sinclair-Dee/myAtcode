#include<iostream>
using namespace std;
int main()
{
    // get integer
    int i,n,k;
    cin >> n>>k;
	int l[n];
	for (i = 0;i<n;i++){
	cin>>l[i];
	}
    // output
	for(i = 1;i < n;i++){  
		int temp = l[i];  
		int j = i - 1;  
		while(temp < l[j]){  
			l[j+1] = l[j];  
			j--;  
			if(j == -1){  
				break;  
			}  
		}  
		l[j+1] = temp;  
	}  
	int sum = 0;
	for(i = 0;i<k;i++)
		sum +=l[n-i-1];
	cout<<sum<<endl;
    return 0;
}