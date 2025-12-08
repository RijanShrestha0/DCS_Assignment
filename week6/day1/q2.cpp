#include <iostream>

void someAlgorithm(int n){
   for(int i = n; i >= 1; i = i - 4){
     int result = i * 2;
   }

   std::cout << "Algorithm finished for n is" << n << std::endl;
}

int main(){
    int n;
    std::cout << "Enter a value for n: ";
    std::cin >> n;
    someAlgorithm(n);
    return 0;
}
