#include <bits/stdc++.h>

using namespace std;

long long n,x,y;
long long f(long long a){
    if(!a) return 1;
    if(a<0) reeturn 0;
    return f(a-x) + f(a-y);
}
int main() {
    cin >>n >>x >>y;
    cout <<f(n);
    return 0;
}
