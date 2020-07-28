
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int minny=10000,maxxy=0;
    int a=0,b=0;
    vector<int> vec;
    for(int i = 0; i < x; i++){
        int g;
        cin >> g;
        if(g <= minny){
            minny = min(g, minny);
            b = i;
        }if(g > maxxy){
            maxxy = max(g, maxxy);
            a = i;
        }
    }
    int ans = (a) + (x - b)-1;
    if(b < a){
        ans -= 1;
    }
    cout << ans;
}
