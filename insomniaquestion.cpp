#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,z,a;
    cin >> x >> y >> z >> a;
    int f;
    cin >> f;
    int county = 0;
    for(int i = 1; i <= f; i++){
        if(i % x != 0 && i % y != 0 && i % z != 0 && i % a != 0){
            county++;
        }
    }
    cout << f-county;
}
