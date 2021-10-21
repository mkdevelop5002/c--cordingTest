#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v(20);
    v[0] = 1;
    for(int i=1;i<20;i++){
        v[i] = v[i-1]*(i+1);
    }
    int n;
    int k;
    cin >> n >> k;
    int answer = v[n-1] / (v[k-1]*v[n-k-1]);
    cout << answer;


}