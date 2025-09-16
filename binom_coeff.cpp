#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>

using namespace boost::multiprecision;

int main() {
    int k;
    int n;
    std::cout << "Enter no. of active electrons N" << std::endl;
    std::cin >> n;
    std::cout << "Enter no. of available orbitals K: " << std::endl;
    std::cin >> k;
    cpp_int diff = k-n;
    cpp_int factk = 1;
    cpp_int factn = 1;
    cpp_int factdiff = 1;
    for (int i = 2; i <= k; ++i)
        factk *= i;
    std::cout << k << "! = K! = " << factk << std::endl;
    for (int i = 2; i <= n; ++i)
        factn *= i;
    std::cout << n << "i = N! " << factn << std::endl;
    for (int i = 2; i <= diff; ++i)
        factdiff *= i;
    std::cout << "(N - K)! =" << factdiff << std::endl;
    
    cpp_int binom_coeff = factk/(factn*factdiff);
    std::cout << "No. of determinants = " << binom_coeff << std::endl; 
    
    return 0;
}
