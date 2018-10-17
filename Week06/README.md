# Find the Running Median

Each time a number is inserted to the array, I use heap sort to sort the array depending by how much number is already in the array.
Then output the median. If the amount of number in the array is odd then divide the current index + 1 by 2 and we got the median.
If the amount of number is odd then divide the current index by 2 to get the middle index, add the number in the middle and the number after it then divide the number by 2 and we got the median.


