#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int n,i,aux;
  cin >> n;
  vector<int> vet;
  for (i = 0; i < n; i++) {
    cin >> aux;
    vet.push_back(aux);
  }
  for (i = 0; i < 5; i++) {
    cin >> aux;
    cout << vet [aux-1] << "\n";
  }
  return 0;
}
