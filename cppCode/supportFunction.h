#pragma once
#include<vector>
#include<iostream>

class supportFunction
{
public:
	supportFunction();
	~supportFunction();

	// ��ѡ������֮��Ľϴ���
	int chooseMaxNumber(int x, int y)
	{
		return x > y ? x : y;
	}
	//����һ�������е�������
	void swap(std::vector<int> &arr, int i, int j)
	{
		int tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}

	void printVector(std::vector<int>& arr)
	{
		for (int i = 0; i < arr.size(); i++)
			std::cout << arr[i] << " ";
		std::cout << std::endl;
	}

private:

};

supportFunction::supportFunction()
{
}

supportFunction::~supportFunction()
{
}
