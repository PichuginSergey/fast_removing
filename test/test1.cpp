#include <iostream>
#include <vector>
#include <cstdlib>
#include "../src/fastRemoving.h"
#include "../src/utils.h"

int main() 
{
	std::vector<int> vec {2,2,4,5,6,2,2,7,8,2,2};
	std::cout << "Init vector:\n";
	print(vec);
	auto new_last = fast_remove(std::begin(vec), std::end(vec), 2);
	vec.erase(new_last, std::end(vec));
	std::cout << "After fast_remove:\n";
	print(vec);
	
	return EXIT_SUCCESS;
}