#include <iostream>

void someAlgorithm(int n){
   int x = 0; 
   for(int i = n - 2; i >= 1; i--){
     x = x + 1; 
   }
   std::cout << "After first loop: " << x << std::endl;
   for(int i = 0; i < n; i++){
     if (i == n/2) {} 
   }
   for(int i = 0; i < 6; i++){
     x = x * 2;
   }
   std::cout << "Final x: " << x << std::endl;
}

int main() {
    int n;
    std::cout << "Enter a value for n: ";
    std::cin >> n;
    someAlgorithm(n);
    return 0;
}
