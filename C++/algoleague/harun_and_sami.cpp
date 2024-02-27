#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    char a[k];
    cin >>a;
    
    int h=0, s=0;
    for(int i=0; i<k; i++){
        if(a[i] == 'H'){
            h++;
        }
        else if(a[i] == 'S'){
            s++;
        }
    }
    int imp_round = n - k;
    int w1 = min(h,s);
    int winner;
    if(w1+imp_round < max(h,s)){
        winner = max(h,s);
        if(winner == h){
            cout <<"Harun";
        }
        if(winner == s){
            cout <<"Sami";
        }
    }
    else{
        cout <<"Cilek";
    }

    return 0;
}
