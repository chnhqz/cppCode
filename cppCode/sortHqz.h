#pragma once
#include<vector>
#include<supportFunction.h>




class hqzSortClass
{
public:
	hqzSortClass();
	~hqzSortClass();
	supportFunction supportFunction;

	// ≤Â»Î≈≈–Ú
	void insertionSort(std::vector<int>& arr)
	{
		if (arr.size() < 2)
			return;
		for (int i = 1; i < arr.size(); i++)
		{
			for (int j = i - 1; j >= 0 && arr[j] > arr[j + 1]; j--)
			{
				supportFunction.swap(arr, j, j + 1);
			}
		}
	}




private:

};

hqzSortClass::hqzSortClass()
{
}

hqzSortClass::~hqzSortClass()
{
}