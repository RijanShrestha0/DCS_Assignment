#include <iostream>

void someAlgorithm(int n){
   for(int i = 0; i < n; i++){
     for(int temp_i_log = n; temp_i_log >= 1; temp_i_log /= 2){
       volatile int dummy_arith = temp_i_log * 2; 
     }
     for(int j = 0; j < n; j++){
       volatile bool dummy_comp = (i == j); 
     }
   }
   volatile int final_arith = n + 1; 
   std::cout << "Algorithm finished for n = " << n << std::endl;
}

int main() {
    int n;
    std::cout << "Enter a value for n: ";
    std::cin >> n;
    someAlgorithm(n);
    return 0;
}
