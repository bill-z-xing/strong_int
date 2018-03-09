
#include <string>
#include <iostream>
#include <algorithm>

#include "strong_int.hpp"


struct MyTag {};

using MyInt = StrongInt<unsigned, MyTag>;

int main()
{
	MyInt i(8);
	MyInt j(16);

	MyInt k = std::max(i, j);
	MyInt l = std::min(i, j);

	MyInt m;
	MyInt n = std::max(l, m);

	std::cout << i << " "
			  << j << " "
			  << k << " "
			  << l << " "
			  << m << " "
			  << n << std::endl;
	return 0;
}
