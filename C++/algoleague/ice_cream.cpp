#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    int max = accumulate(a.begin(), a.end(), 0) - *min_element(a.begin(), a.end());
    
    cout <<max <<endl;
    
    return 0;
}
