#include <iostream>

void evalConstexprFun();

void evalConstevalFun();

int main() {
    evalConstexprFun();
    evalConstevalFun();
    return 0;
//    https://www.learncpp.com/cpp-tutorial/constexpr-and-consteval-functions/
}

//Best practice
//Constexpr/consteval functions used in a single source file (.cpp) can be defined in the source file above where they are used.
//Constexpr/consteval functions used in multiple source files should be defined in a header file so they can be included into each source file.


//Therefore, we’d advise the following:

//For best results, avoid calling non-constexpr functions from within a constexpr function if possible.
//If your constexpr function requires different behavior for constant and non-constant contexts, conditionalize the behavior with if (std::is_constant_evaluated()).
//Always test your constexpr functions in a constant context, as they may work when called in a non-constant context but fail in a constant context.