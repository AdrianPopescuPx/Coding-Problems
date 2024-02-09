/**
 * A class to calculate the difference between the sum of numbers divisible by a given divisor 
 * and the sum of numbers not divisible by the divisor within a specified range.
 * 
 * <p>
 * This class provides a method to calculate the difference between the sum of numbers 
 * divisible by a given divisor and the sum of numbers not divisible by the divisor 
 * within the range from 1 to n.
 * </p>
 * 
 * @author Adrian Popescu
 * @see <a href="https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/description/">Problem on LeetCode</a>
 */

class DivisibleSums {
    public int differenceOfSums(int n, int m) {
        int sumNotDivisible = 0, sumDivisible = 0;
        for (int i = 1; i <= n; ++i) {
            if (i % m == 0) {
                sumDivisible += i;
            }   else {
                sumNotDivisible += i;
            }
        }
        return sumNotDivisible - sumDivisible;
    }
}