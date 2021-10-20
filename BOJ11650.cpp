#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// input 내용
// 5
// 3 4
// 1 1
// 1 -1
// 2 2
// 3 3
bool compare(pair<int,int> a, pair<int,int> b){
    if(a.first == b.first){
        return a.second<b.second;
    }
    
    return a.first < b.first;
    
}

int main(){
    int n;
    cin >> n;
    vector< pair<int,int> > v;
    for(int i=0;i<n;i++){
        int num1;
        int num2;
        cin >> num1 >> num2;
        v.push_back(make_pair(num1,num2));
    }
    sort(v.begin(),v.end(),compare);
    for(int i=0;i<n;i++){
        cout << v[i].first <<" "<<v[i].second<<"\n";
    }
    return 0;

}