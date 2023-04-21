# Merge Sort

Merge sort is defined as a sorting algorithm that works by dividing an array
into smaller subarrays, sorting each subarray, and then merging the sorted
subarrays back together to form the final sorted array.

In simple terms, we can say that the process of merge sort is to divide the
array into two halves, sort each half, and then merge the sorted halves back
together. This process is repeated until the entire array is sorted.

## Complexity

* O(n log n)

it can sort large arrays relatively quickly. It is also a stable sort, which
means that the order of elements with equal values is preserved during the sort.

*Merge sort is a popular choice for sorting large datasets because it is
relatively efficient and easy to implement. It is often used in conjunction
with other algorithms, such as quicksort, to improve the overall performance
of a sorting routine.*

## Merge sort process

*Think of it as a recursive algorithm continuously splits the array in half
until it cannot be further divided. This means that if the array becomes
empty or has only one element left, the dividing will stop, i.e. it is the
base case to stop the recursion.* If the array has multiple elements, split
the array into halves and recursively invoke the merge sort on each of the
halves. *Finally, when both halves are sorted, the merge operation is applied.
Merge operation is the process of taking two smaller sorted arrays and combining
them to eventually make a larger one.*

## Illustration

* arr[] = {38, 27, 43, 3, 9, 82, 10}

* At first, check if the left index of array is less than the right index,
  if yes then calculate its mid point

* Now, as we already know that merge sort first divides the whole array
  iteratively into equal halves, unless the atomic values are achieved.

* Here, we see that an array of 7 items is divided into two arrays of size 4
  and 3 respectively.

* arrLeft[] = {38, 27, 43, 3} | arrRight[] = {9, 82, 10}

* Now, again find that is left index is less than the right index for both
  arrays, if found yes, then again calculate mid points for both the arrays.

* Now, further divide these two arrays into further halves, until the atomic
  units of the array is reached and further division is not possible

subArrLeft[] = {38, 27}; subArrLeft2[] = {43, 3} | subArrRight[] = {9, 82}; subArrRight2[] = {10}

* After dividing the array into smallest units, start merging the elements again
  based on comparison of size of elements

* Firstly, compare the element for each list and then combine them into another
  list in a sorted manner.

## Steps

step 1: start

step 2: declare array and left, right, mid variable

step 3: perform merge function.
    if left > right
        return
    mid= (left+right)/2
    mergesort(array, left, mid)
    mergesort(array, mid+1, right)
    merge(array, left, mid, right)

step 4: Stop

MergeSort(arr[], l,  r)
If r > l

* Find the middle point to divide the array into two halves:
  * middle m = l + (r – l)/2
* Call mergeSort for first half:
  * Call mergeSort(arr, l, m)
* Call mergeSort for second half:
  * Call mergeSort(arr, m + 1, r)
* Merge the two halves sorted in steps 2 and 3:
  * Call merge(arr, l, m, r)


[reference](https://www.geeksforgeeks.org/merge-sort/?ref=gcse)
