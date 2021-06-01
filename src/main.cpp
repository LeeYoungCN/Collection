#include <iostream>
#include "user_vector.h"
using namespace user_std;
int main() {
    vector<int> a(2);
    std::cout << a.max_size() << std::endl;
    return 0;
}
