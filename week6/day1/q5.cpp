#include <iostream>

void someAlgorithm(int n)
{
   int count = 0;

   for(int i = 1; i <= n; i *= 2)
   {
     count++;
   }

   std::cout << "Algorithm finished for n = " << n << ", operations: " << count << std::endl;
}

int main() {
    int n;
    std::cout << "Enter a value for n: ";
    std::cin >> n;
    someAlgorithm(n);
    return 0;
}
