#include <iostream>
#include <deque>
using namespace std;

void display_deque(deque<int> dq){
  for (const int& num : dq) {
    cout << num << " ";
  }
}

int main() {
  deque<int> nums {1, 2, 3};
  
  cout << "Front element: " << nums.front() << endl;
  cout << "Back element: " << nums.back() << endl;
  cout << "Element at index 1: " << nums.at(1) << endl;
  cout << "Element at index 0: " << nums[0] <<endl;
  
  nums.pop_back();
  cout << "\nDeque after pop_back(): ";
  display_deque(nums);

  nums.pop_front();
  cout << "\nDeque after pop_front(): ";
  display_deque(nums);
  
  return 0;
}
