#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
// input 내용
// 3 4
// ohhenrie
// charlie
// baesangwook
// obama
// baesangwook
// ohhenrie
// clinton

int main(){
    int n;
    int m;
    vector<string> v;
    vector<string> answer;
    cin >> n >> m;
    for(int i=0;i<n;++i){
        string text;
        cin >> text;
        v.push_back(text);
    }
    sort(v.begin(),v.end());
    int cnt =0;
    for(int j=0;j<m;++j){
        string text2;
        cin >> text2;
        if(binary_search(v.begin(),v.end(),text2)){
            answer.push_back(text2);
            cnt+=1;
        }
    }
    cout << cnt << "\n";
    sort(answer.begin(),answer.end());
    for(int i=0;i<answer.size();i++){
        cout << answer[i] << "\n";
    }
    



}