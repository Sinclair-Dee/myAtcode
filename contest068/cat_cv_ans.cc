//官方给出的答案思路是给同时连接1和n的岛屿打标记。边输入边打标记。
//遍历所有的连线。与1相连的岛屿k，如果k没有打标记，则打上标记；如果k已经被打上标记了，其必然是因为与n相连所打上了标记。说明K
//点同时与n和1相连，输出possible。遇到与n相连的岛屿也是这个思路。
//该算法是最省空间的一种算法。
#include <iostream>
#include <assert.h>
#include <vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    //对岛屿1-n都打上false的标记
    //对vis的前n+1个元素都初始化为false
    vector <bool> vis(n+1,false);
    bool ans = false;
    for(int i = 0;i<m;i++){
        int a,b;
        cin>>a>>b;
        assert(1<=a && a<b &&b<=n);
        if(a == 1){
            if(vis[b]){
                ans = true;
                break;
            }
            vis[b] = true;
        }
        if(b == n){
            if(vis[a]){
                ans = true;
                break;
            }
            vis[a] = true;
        }
    }
    if(ans) cout <<"POSSIBLE"<<endl;
    else cout<<"IMPOSSIBLE"<<endl;
    return 0;
}