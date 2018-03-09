
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

#include <boost/range/iterator_range.hpp>
#include <boost/assert.hpp>

#include "strong_int.hpp"
#include "strong_vec.hpp"


struct MyTag {};

using MyInt = StrongInt<unsigned, MyTag>;

using MyVec = StrongVec< std::vector<int>, MyInt >;

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

	MyVec vec(j, 500);
	BOOST_ASSERT(vec[i] == 500);


	return 0;
}
