
/*   Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element
in the given array. It is given that all array elements are distinct.

Time complexity------O(n+kLogn)
using mean heap*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int findKthSmallest(vector<int> const &vec, int k)
{

	std::priority_queue<int, std::vector<int>, std::greater<> > pq(vec.begin(), vec.end());


	while (--k) {
		pq.pop();
	}

	return pq.top();
}

int main()
{
	vector<int> vec  = { 7, 4, 6, 3, 9, 1 };
	const size_t k = 3;

	cout << "K'th smallest element in the array is " <<
			findKthSmallest(vec, k);

	return 0;
}
