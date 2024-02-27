#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
  int N;
  cin >>N;
  vector<int> a(N); 
  
  for(int i=0; i<N; i++){
    cin >>a[i];
  }
  int total;
  cin >>total;
  int sum = accumulate(a.begin(),a.end(), 0) + total;
  if(sum%N == 0){
      cout<<"1";
  }
  else{
      cout<<"0";
  }

  return 0;
}
