# Arrays
classical array problems with solution

## What you may learn here?

This repository is full of classical array algorithms and problems solution specially focused on competitive programming. All of solutions are written in c++ programming language. 

## Problems

* [Trapping Rainwater problem](https://github.com/xenith1916/Arrays/blob/master/README.md#trapping-rainwater-problem)
* [Minmum platforms problem](https://github.com/xenith1916/Arrays/blob/master/README.md#minimum-platforms-problem)

## Trapping Rainwater problem
#### Approach 1- Brute Force
For each element in the array, we find the maximum level of water it can trap after the rain, which is equal to the minimum of maximum height of bars on both the sides minus its own height.
#### Algorithm
* Initialize result=0
* Iterate the array from left to right
* Initialize left_maximum=0 and right_maximum=0
* Iterate from current position element to the begining of array updating
       left_maximum=max(left_maximum,arr[j])
* iterate the current element to the end of array updating
       right_maximum=(right_maximu,arr[j])
* Add min(left_maximum,right_maximum)-arr[i] to result
#### Complexity 
* Time complexity:- O(n^2)-----For each element of array, we iterate the left and right parts.
* Auxillary Space:-O(1)----Extra space
#### Approach 2-Using two pointers(Optimized solution of above problrm)-------[code](https://github.com/xenith1916/Arrays/blob/master/Trapping-Rainwater-Problem)
Instead of computing the left and right parts seperately,we can do it in one iteration, if right_maximum[i]>left_maximum[i] the water trapped depends upon the left_max, and similar as in the case when left_maximum[i]>right_maximum[i] the water trapped depends upon the right_maximum. So, we can say that if there is a larger bar at one end (say right), we are assured that the water trapped would be dependant on height of bar in current direction (from left to right). As soon as we find the bar at other end (right) is smaller, we start iterating in opposite direction (from right to left). We must maintain left_maximum and right_maximum during the iteration, but now we can do it in one iteration using 2 pointers, switching between the two. 
#### Algorith
* Initialize left pointer to 0 and right pointer to size-1
* while left<right
*      if arr[left]<arr[right]
           * if arr[left]>=left_maximum, update left_maximum
           * else add left_maximum-height[left] to result
           * Add 1 to left
*      else
           * if arr[right]>=right_maximum, update right_maximum
           * else add right_maximum-arr[left] to result
           * subtract 1 to right
#### complexity
* Time complexity:- O(n)-----For single iteration
* Auxillary Space:-O(1)----Extra space,only constant space required

## Minimum platforms problem
#### Approach        [code](
The basic idea is to merge the arrival and departure time of the train and consider them in sorted order. We maintain a counter to count number of trains present at the station at any point of time.The counter also represents number of platforms  needed at the time.
* if train is scheduled to arrive next,we increase the counter by 1 and update minimum platforms needed if count is more than minimum platforms needed so far.
* if train is scheduled to depart next, we decrease the counter by 1.
*          when two trains are scheduled to arrive and depart at the same time, we depart the trail first.
#### Complexity
* Time Complexity:-O(nlog n)------- assuming that a O(nLogn) sorting algorithm for sorting arr[] and dep[].
* Auxillary Space:-O(1)
