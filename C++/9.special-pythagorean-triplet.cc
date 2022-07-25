#include <iostream>
using namespace std;

//(3, 4, 5) 	(5, 12, 13) 	(8, 15, 17) 	(7, 24, 25)
//(20, 21, 29) 	(12, 35, 37) 	(9, 40, 41) 	(28, 45, 53)
//(11, 60, 61) 	(16, 63, 65) 	(33, 56, 65) 	(48, 55, 73)
//(13, 84, 85) 	(36, 77, 85) 	(39, 80, 89) 	(65, 72, 97)

int main(void) {
  int primitives[2][3] = {{8, 15, 17}, {7, 24, 25}};
  int sum, factor = 1;

  while (sum != 1000) {
    for (int i = 0; i < sizeof(primitives) / sizeof(primitives[0]); i++) {
      sum = 0;
      for (int j = 0; j < 3; j++)
        sum += factor * primitives[i][j];

      if (sum == 1000) {
        cout << "Triples: ";
        for (int k = 0; k < 3; k++) {
          cout << factor * primitives[i][k] << " ";
        }
        break;
      }
    }
    factor++;
  }
}
