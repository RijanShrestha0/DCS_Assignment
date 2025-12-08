#include <iostream>

void someAlgorithm(int n){
   for(int i = 0; i < n; i++){
     int temp = 0;
     for(int j = 0; j < n; j++){
       if (i == j) {
           temp++;
       }
     }
   }
   int finalResult = n * 2;
   std::cout << "Algorithm finished for n = " << n << std::endl;
}

int main(){
    int n;
    std::cout << "Enter a value for n: ";
    std::cin >> n;
    someAlgorithm(n);
    return 0;
}
