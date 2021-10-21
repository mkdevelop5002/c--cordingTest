#include <iostream>
#include <vector>
#include <stdio.h>
#include <queue>
using namespace std;

// input 내용
// 5 17
#define MAX 100001
int N,K;
bool chk[MAX];

int BFS(int N,int K){
    queue<pair<int,int> > q;
    q.push(make_pair(N,0));
    chk[N] = true;
    while(!q.empty()){
        int a = q.front().first;
        int b = q.front().second;
        q.pop();
        if(a== K){
            return b;
        }
        
        if(a+1 <MAX && !chk[a+1]){
            q.push(make_pair(a+1,b+1));
            chk[a+1] = true;
        }
        if(a-1 >=0 && !chk[a-1]){
            q.push(make_pair(a-1,b+1));
            chk[a-1] = true;
        }
        if(a*2 <MAX && !chk[a*2]){
            q.push(make_pair(a*2,b+1));
            chk[a*2] = true;
        }

    }


}
int main(){

    cin >> N >> K;
    cout << BFS(N,K) << endl;
    return 0;
}