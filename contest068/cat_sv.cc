//
/*******************************************************************************
Problem Statement
In Takahashi Kingdom, there is an archipelago of N islands, called Takahashi Islands. 
For convenience, we will call them Island 1, Island 2, ..., Island N.
There are M kinds of regular boat services between these islands. Each service connects two islands. 
The i-th service connects Island ai and Island bi.

Cat Snuke is on Island 1 now, and wants to go to Island N. However, it turned out that there is no boat 
service from Island 1 to Island N, so he wants to know whether it is possible to go to Island N by using two boat services.

Help him!!!

Constraints:
3≤N≤200 000
1≤M≤200 000
1≤ai<bi≤N
(ai,bi)≠(1,N)
If i≠j, (ai,bi)≠(aj,bj).

Input
Input is given from Standard Input in the following format:

N M
a1 b1
a2 b2
:
aM bM
Output
If it is possible to go to Island N by using two boat services, print POSSIBLE; otherwise, print IMPOSSIBLE.

Sample Input 1
Copy
3 2
1 2
2 3
Sample Output 1
Copy
POSSIBLE
Sample Input 2
Copy
4 3
1 2
2 3
3 4
Sample Output 2
Copy
IMPOSSIBLE
You have to use three boat services to get to Island 4.

Sample Input 3
Copy
100000 1
1 99999
Sample Output 3
Copy
IMPOSSIBLE
Sample Input 4
Copy
5 5
1 3
4 5
2 3
2 4
1 4
Sample Output 4
Copy
POSSIBLE
You can get to Island 5 by using two boat services: Island 1 -> Island 4 -> Island 5.
 * ****************************************************************************/

#include <iostream>
#include <queue>
#include <vector>
using namespace std;
 
const int N = 200001;
vector <int> E[N];//建立N个vector,第i个vector存储与i节点相临接的结点。
 
int main(){
    //下边这句话的作用是加快c++读写速度。
	ios_base::sync_with_stdio(false);
	queue <int> que;
	//读入数据
	int n,m,x,y;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		E[x].push_back(y);
		E[y].push_back(x);
	}
	for(int i=0;i<E[1].size();i++){
	    que.push(E[1][i]);
	}
	bool possible = false;
	while(!que.empty()){
	    int temp = que.front();
	    que.pop();
	    for(int i=0;i<E[temp].size();i++){
	        if(E[temp][i] == n){
	            possible = true;
	            break;
	        }
	    
	    }
	}
	if(possible) cout<<"POSSIBLE"<<endl;
	else cout<<"IMPOSSIBLE"<<endl;
    return 0;
}
