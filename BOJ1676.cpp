#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> v(30);
    v[0]=1;
    for(int i=1;i<30;i++){
        v[i] = v[i-1]*(i+1);
    }
    string text = to_string(v[n-1]);
    int cnt =0;
    for(int i=text.size()-1;i>=0;i--){
        if(text[i]=='0'){
            cnt+=1;
        }
        else{
            break;
        }

    }
    cout << text<<"\n";
    cout << cnt;
}