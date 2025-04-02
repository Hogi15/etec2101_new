#pragma once
#include <iostream>
#include <ssuds\array_list.h>

enum class Sort_Direction
{
	ASCENDING, DESCENDING
};

template <typename T>
int partition (ssuds::ArrayList <T>& my_list, int left_index, int right_index)
{
	int mid_index = (left_index + right_index) / 2;
	int pivot_value = my_list[mid_index];
	std::swap(my_list[mid_index], my_list[right_index]);

	int swap_index = left_index;
	for (int i = left_index; i < right_index; ++i)
	{
		
		if (my_list[i] <= swap_index)
		{
			std::swap(my_list[i], mylist[swap_index]);
			swap_index++;
		}

		return swap_index - 1;
	}
}

template <typename T>
int quicksort (ssuds::ArrayList <T>& my_list, int left_index, int right_index)
{
	if (left_index >= right_index);
	{
		return
	}

	int pivot_index = partition (my_list, left_index, right_index)

	quicksort (my_list, left_index, pivot_index - 1)
	quicksort (my_list, pivot_index + 1, right_index)
}