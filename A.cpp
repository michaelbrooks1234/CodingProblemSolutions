#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    cin >> x;
    for(int j = 0; j < x; j++){
        bool ans = true;
        stack<char> bruh = {};
        string g = {};
        cin >> g;
        for(int i = 0; i < g.size(); i++){
            if(g[i] == '(' || g[i] == '[' || g[i] == '{'){
                bruh.push(g[i]);
            }if(g[i] == ')'){
                if(!bruh.empty()){
                    if(bruh.top() == '('){
                        bruh.pop();
                    }else{
                        ans = false;
                    }
                }else{
                    ans = false;
                    }
            }if(g[i] == ']'){
                if(!bruh.empty()){
                    if(bruh.top() == '['){
                        bruh.pop();
                    }else{
                        ans = false;
                    }
                }else{
                    ans = false;
                    }
            }if(g[i] == '}'){
                if(!bruh.empty()){
                    if(bruh.top() == '{'){
                        bruh.pop();
                    }else{
                        ans = false;
                    }
                }else{
                    ans = false;
                    }
            }
        }
        if(!bruh.empty()){
            ans = false;
        }
        if(ans){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}

