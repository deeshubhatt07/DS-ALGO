#include<iostream>
#include<cmath>
using namespace std;
void showPowerSet(int* set, int set_length) {
   unsigned int size = pow(2, set_length);
   for(int counter = 0; counter < size; counter++) {
      cout << "{";
      for(int j = 0; j < size; j++) {
         if(counter & (1<<j))
            cout << set[j] << " ";
         }
         cout << "}" << endl;
      }
   }
   int main() {
   int set[] = {1,2,3};
   showPowerSet(set, 3);
}
