#include <iostream>

void someAlgorithm(int n){
   long long sum = 0; 

   for(int i = 0; i < n; i++){
     for(int j = 0; j <= i; j++){
       sum += (i + j); 
     }
   }

   std::cout << "Algorithm finished for n = " << n << ", sum: " << sum << std::endl;
}

int main() {
    int n;
    std::cout << "Enter a value for n: ";
    std::cin >> n;
    someAlgorithm(n);
    return 0;
}
