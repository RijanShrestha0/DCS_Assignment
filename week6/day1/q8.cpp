#include <iostream>

void someAlgorithm(int n){
   for(int i = 0; i < n; i++){
     for(int j = 0; j < n; j++){
       for(int k = 0; k < n; k++){
         volatile bool dummy_comp = (i == j && j == k); 
       }
     }
   }

   volatile int dummy_arith = n * n;

   for(int i = 0; i < n; i++)
   {
     for(int j = 10; j >= 1; j--)
     {
       volatile int dummy_assign = i + j; 
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
