#include<iostream>

using namespace std;

void printer(int n) {
  if (n == 0) return;

  cout << n << " ";
  printer(n - 1);
  cout << n << " ";
}

int main() {

  int n ;
  cin>>n;
  printer(n);

  return 0;
}