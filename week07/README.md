# 731A - Coupons and Discounts
[Link](http://codeforces.com/contest/731/submission/44766021)  

In this problem we just need to check 4 conditions :
- if the current value is zero and there is an active coupons, then the answer is NO.
- if the current value is the last the current value subtracted by the active coupon is not zero, then the answer is NO.
- if the current value subtracted by the active coupon is zero, then active coupon is zero.
- if the current value subtracted by the active coupon is not zero and the current value is not the last value, then active coupoon is  current value mod by 2.

# 978B - File Name
[Link](http://codeforces.com/contest/978/submission/44766940)


In this problem I create a variable called. If 'x' is found add x by 1 as long as it is less than 3, after that check if x is 3.
If it is then add count by 1.
If 'x' is not found then simply make x equal to zero.


# 946A - Partition
[Link](http://codeforces.com/contest/946/submission/44767157)

In this problem we simply add all positive number to B and add all negative number to C.
Since the sum is B - C then if C is all negative it will become B + C.

