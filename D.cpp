#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b;

    bool ans = true;
    map<int, int> mappy;
    for(int i = 0; i < b; i++){
        int g;
        cin >> g;
        mappy[g]++;
    }
    cin >> c;
    for(int i = 0; i < c; i++){
        int g;
        cin >> g;
        mappy[g]++;
    }

    for(int i = 1; i <= a; i++){
        if(mappy[i] < 1){
            ans = false;
        }
    }
    if(ans){
        cout << "I become the guy.";
    }else{
        cout << "Oh, my keyboard!";
    }
}
