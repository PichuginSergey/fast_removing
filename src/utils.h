#ifndef UTILS_H_
#define UTILS_H_

#include <iostream>

template <typename Con>
void print(const Con& con)
{
	for (const auto& elm : con)
		std::cout << elm << " ";
	std::cout << std::endl;
}

#endif