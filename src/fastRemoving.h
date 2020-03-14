#ifndef FAST_REMOVING_H_
#define FAST_REMOVING_H_

#include <utility>

template <typename Iter, typename T>
Iter fast_remove(Iter first, Iter last, T value)
{
	while (first != last)
	{
		if (*first == value)
			*first = std::move(*(--last));
		else
			++first;
	}
	return first;
}

template <typename Iter, typename Pred>
Iter fast_remove_if(Iter first, Iter last, Pred pred)
{
	while (first != last)
	{
		if (pred(*first))
			*first = std::move(*(--last));
		else
			++first;
	}
	return first;
}

#endif