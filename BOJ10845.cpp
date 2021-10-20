#include <iostream>
#include <vector>
using namespace std;
// input 내용
// 15
// push 1
// push 2
// front
// back
// size
// empty
// pop
// pop
// pop
// size
// empty
// pop
// push 3
// empty
// front
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
        string order;
        cin >> order;
        int num;
        if(order == "push"){
            cin >> num;
            v.push_back(num);
        }
        else{
            if(order == "front"){
                if(v.size()!=0){
                    cout << v.front()<<"\n";
                }
                else{
                    cout << -1 <<"\n";
                }
                
            }
            else if(order == "back"){
                if(v.size()!=0){
                    cout << v.back() <<"\n";
                }
                else{
                    cout << -1 <<"\n";
                }
            }
            else if(order == "size"){
                cout << v.size() <<"\n";
            }
            else if(order == "empty"){
                cout << v.empty() <<"\n";
            }
            else if(order == "pop"){
                if(v.size()!=0){
                    int pop_num;
                    pop_num = v.front();
                    v.erase(v.begin());
                    cout << pop_num <<"\n";
                }
                else{
                    cout << -1 <<"\n";
                }
                
            }
        }

    }
    
    
}