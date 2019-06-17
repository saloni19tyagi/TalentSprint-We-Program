#include<iostream>

using namespace std;

int main() {

     int pattern_size, star_count = 1 ;
        cin >> pattern_size;

      for (int i = pattern_size; i > 0 ;i--) {
        for (int j = 0; j < i-1; j++) {
           cout << " " ;
        }
        for (int j = 0; j < star_count; j++) {
            cout << "*";
        }

        cout << "\n"; 
        star_count += 2;
        }
}
