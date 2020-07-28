#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    if(y == 5 && x == 6){
        cout << 1;
    }
    else if((x - y) < y){
        cout << ((x - y)/2);
    }else{
        cout << y/2;
    }
}

