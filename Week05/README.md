# 115A - Party
[Link](http://codeforces.com/contest/115/submission/43721057)  

In this problem I create a struct to keep employee's index , parent index, and pointer to parent struct.
I create an array of struct node. Then I run it through a loop to fill its index and parent index. Then, run it through a loop again to link it to its parent.
To check how many party can be created, I check how many level does an employee has to reach the root manager.
I create a function to count how many level using a recursion until the pointer reach a null.
After checking each employee, the highest level is the number of group that is sufficient.

# 913B - Christmas Spruce
[Link](http://codeforces.com/contest/913/submission/43643034)

For this problem I link each node is linked to its parent the same way in the first problem.

Then, I create a function to add the number of leaf in the parent node. Then run a for loop to add leaf to each leaf root.
Then, I create a function to reduce the number of leaf again since and also mark a root.
Then run a for loop again to check every root and check if there is any root with leaf less than 3.
If there is it will return false and break the loop and the result is No, else the result is Yes.

