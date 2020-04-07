# Arrays
classical array problems with solution

## What you may learn here?

This repository is full of classical array algorithms and problems solution specially focused on competitive programming. All of solutions are written in c++ programming language. 

## Problems

* Trapping Rainwater problem
* Minmum platforms problem

## Trapping Rainwater
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

