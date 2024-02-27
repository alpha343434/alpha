#include <iostream>

using namespace std;

int main() {
  long long int a;
  cin >> a;
  while(a >= 10){
    long long int x = 1;
    while(a != 0){
        if(a %10 != 0){
            x *= a % 10;
        }
        a /= 10;
    }
    a = x;
  }
  cout <<a <<endl;

  return 0;
}
