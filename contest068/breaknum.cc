//以下两种算法均能通过。
/*********************************************
#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int num=1;
    while(num<=N){
        num *=2;
    }
    cout<<num/2<<endl;
    return 0;
}
*********************************************/
#include <iostream>
using namespace std ;
int main (){
    int n;
    cin>>n;
    for(int i = 0;i < 7; i++){
        if(n<(1<<(i+1))){
            cout <<(1<<i)<<endl ;
            break ;
        }
    }
return 0;
}