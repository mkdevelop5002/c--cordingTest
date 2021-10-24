#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main(){
    int n;
    cin >> n;
    deque<int> v;
    for(int i=0;i<n;i++){
        string text;
        cin >> text;
        if(text == "push_back"){
            int number;
            cin >> number;
            v.push_back(number);
        }
        else if(text =="push_front"){
            int number;
            cin >> number;
            v.push_front(number);
        }
        else if(text == "pop_front" ){
            if(v.size()==0){
                cout << -1 <<"\n";
            }
            else{
                cout << v.front() << "\n";
                v.pop_front();
            }
            

        }
        else if(text =="pop_back" ){
            if(v.size()==0){
                cout << -1 <<"\n";
            }
            else{
                cout << v.back() << "\n";
                v.pop_back();

            }
            
        }
        else if(text == "size"){
            cout << v.size() << "\n";
        }
        else if(text =="empty"){
            if(v.size()==0){
                cout << 1 <<"\n";
            }
            else{
                cout << 0 << "\n";
            }
        }
        else if(text == "front"){
            if(v.size()==0){
                cout << -1 << "\n";
                            }
            else{
                cout << v.front() << "\n";
            }
        }
        else if(text == "back"){
            if(v.size()==0){
                cout << -1 <<"\n";
            }
            else{
                cout << v.back() << "\n";
            }
        }
       
    }

}