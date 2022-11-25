#include <iostream>
#include <vector>
using namespace std;
int N = rand() % 90 + 10;
struct предмет {
double маса;
double ціна;
};
vector <предмет> набір;
предмет окремий;
int main() {
  for (int i = 0; i < N; i++) {
    окремий.маса = rand() % 10 + 0.1;
  };
}