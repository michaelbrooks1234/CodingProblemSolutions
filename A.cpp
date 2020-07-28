#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    cin >> x;
    for(int j = 0; j < x; j++){
        bool ans = true;
        stack<char> stacky = {};
        string g = {};
        cin >> g;
        for(int i = 0; i < g.size(); i++){
            if(g[i] == '(' || g[i] == '[' || g[i] == '{'){
                stacky.push(g[i]);
            }if(g[i] == ')'){
                if(!stacky.empty()){
                    if(stacky.top() == '('){
                        stacky.pop();
                    }else{
                        ans = false;
                    }
                }else{
                    ans = false;
                    }
            }if(g[i] == ']'){
                if(!stacky.empty()){
                    if(stacky.top() == '['){
                        stacky.pop();
                    }else{
                        ans = false;
                    }
                }else{
                    ans = false;
                    }
            }if(g[i] == '}'){
                if(!stacky.empty()){
                    if(stacky.top() == '{'){
                        stacky.pop();
                    }else{
                        ans = false;
                    }
                }else{
                    ans = false;
                    }
            }
        }
        if(!stacky.empty()){
            ans = false;
        }
        if(ans){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}

