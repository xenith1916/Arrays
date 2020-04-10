/*  Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest
element in the given array. It is given that all array elements are distinct.

Time complexity----O(n)*/


#include <bits/stdc++.h>
#include <vector>
//#include <algorithm>
using namespace std;


int main()
{
	vector<int> a = { 7, 4, 6, 3, 9, 1 };
	const size_t k = 3;

	nth_element(a.begin(), a.begin() + k - 1, a.end());

	cout << "K'th smallest element in the array is " << a[k - 1];

	return 0;
}
