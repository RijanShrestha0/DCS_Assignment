#include <iostream>

void someAlgorithm(int n){
   for(int i = 1; i <= n; i = i + 5){
     if (i % 10 == 0) {
     }
   }
   std::cout << "Algorithm finished for n = " << n << std::endl;
}

int main() {
    int n;
    std::cout << "Enter a value for n: ";
    std::cin >> n;
    someAlgorithm(n);
    return 0;
}
