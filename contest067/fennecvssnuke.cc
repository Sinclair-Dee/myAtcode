#include <iostream>
#include <queue>
#include <vector>
using namespace std;
 
const int N=1e5+10;
vector <int> E[N];//建立N个vector,第i个vector存储与i节点相临接的结点。
int color[N],cnt[3];
 
int main(){
    //下边这句话的作用是加快c++读写速度。
	ios_base::sync_with_stdio(false);
	queue <int> que;
	int n,x,y;
	cin>>n;
	//读入数据
	for(int i=1;i<n;i++){
		cin>>x>>y;
		E[x].push_back(y);
		E[y].push_back(x);
	}
	color[1]=1;
	color[n]=2;
	que.push(1);
	que.push(n);//fennec先操作，所以先把染色为黑色的点放入队列中。
	//依次对队列中的结点根据相i邻的结点染色。
	while(!que.empty()){
		int tmp=que.front();
		que.pop();
		cnt[color[tmp]]++;
		for(int i=0;i<E[tmp].size();i++){
			int v=E[tmp][i];
			if(color[v]) continue;
			color[v]=color[tmp];
			que.push(v);
		}
	}
	//比较黑点多还是白点多，做出判断。
	if(cnt[2]>=cnt[1]) cout<<"Snuke"<<endl;
	else cout<<"Fennec"<<endl;
	return 0;
}
