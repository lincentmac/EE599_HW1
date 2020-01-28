#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::cout << solution.FactorialNonRecur(-1) << std::endl;
    std::cout << solution.FactorialRecur(-1) << std::endl;

    std::cout << solution.FactorialNonRecur(0) << std::endl;
    std::cout << solution.FactorialRecur(0) << std::endl;

    std::cout << solution.FactorialNonRecur(6) << std::endl;
    std::cout << solution.FactorialRecur(6) << std::endl;

    return EXIT_SUCCESS;
}