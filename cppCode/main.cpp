#include <stdio.h>
#include<iostream>
#include<algorithm>
#include<sortHqz.h>
#include<vector>
#include<supportFunction.h>


int main()
{

	std::vector<int> arr = {4, 2, 3, 4, 3, 10, 5, 32, 3};
	hqzSortClass sort;
	supportFunction supportFunction;

	supportFunction.printVector(arr);
	sort.insertionSort(arr);
	supportFunction.printVector(arr);



	// std::cout << supportFunction.chooseMaxNumber(11, 2) << std::endl;
	std::cout <<  "hello world" << std::endl;
	return 0;
}