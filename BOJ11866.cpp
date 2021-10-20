#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
// input 내용
// 7 3
int main(){
    int num;
    int k;
    cin >> num >> k;
    vector<int> v(num);
    vector<int> answer;
    iota(v.begin(),v.end(),1);
    int idx = 0;
    int cnt = 0;
    while(true){
        if(cnt == num){
            break;
        }
        for(int i=0;i<num;i++){
            if(v[i]!=0){
                idx+=1;
            }
            if(idx==k){
                answer.push_back(v[i]);
                v[i]=0;
                idx=0;
                cnt+=1;
            }
        }
    }
    cout << "<";
    for(int j=0;j<num-1;j++){
        cout << answer[j] <<", ";
    }
    cout << answer[num-1] <<">";

}