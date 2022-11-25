#include <iostream>
#include <vector>
using namespace std;
int N = rand() % 30 + 10;
struct предмет {
double маса;
double ціна;
};
vector <предмет> набір;
vector <int> оптимальний;
предмет окремий;
int main() {
  srand(time(NULL));
  for (int i = 0; i < N; i++) {
    окремий.маса = rand() % 10 + 0.1;
    окремий.ціна = rand() % 50000 + 50;
    набір.push_back(окремий);
  }
  for(int i = 0; i < набір.size(); i++) {
    int index = i;
    for (int j = i + 1; j < набір.size(); j++) {
      if (набір [index].ціна < набір [j].ціна) {
        index = j;
      }
    }
    swap(набір[i], набір[index]);
  }
  double sum1 = 0.0;
  double sum2 = 0.0;
  for (int i = 0; i < N; i++) {
    if ((sum1 + набір[i].маса) <= 50) {
      sum1 += набір[i].маса;
      sum2 += набір[i].ціна;
      оптимальний.push_back(i);
    }
  }
  cout << "Весь набір: " << endl;
  for (int i = 0; i < N; i++) {
    cout << "Предмет: " << i << " ";
    cout << "Маса: " << набір[i].маса << " ";
    cout << "Ціна: " << набір[i].ціна << endl;
  }
  cout << "Оптимальний набір: " << endl;
  for (int i = 0; i < оптимальний.size(); i++) {
    cout << "Предмет: " << i << " ";
    cout << "Маса: " << набір[оптимальний[i]].маса << " ";
    cout << "Ціна: " << набір[оптимальний[i]].ціна << endl;
  }
  cout << "Загальна ціна: " << sum2 << endl;
  cout << "Загальна маса: " << sum1 << endl;
}