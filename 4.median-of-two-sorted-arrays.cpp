/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 *
 * https://leetcode.com/problems/median-of-two-sorted-arrays/description/
 *
 * algorithms
 * Hard (35.18%)
 * Likes:    20354
 * Dislikes: 2306
 * Total Accepted:    1.6M
 * Total Submissions: 4.7M
 * Testcase Example:  '[1,3]\n[2]'
 *
 * Given two sorted arrays nums1 and nums2 of size m and n respectively, return
 * the median of the two sorted arrays.
 * 
 * The overall run time complexity should be O(log (m+n)).
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: nums1 = [1,3], nums2 = [2]
 * Output: 2.00000
 * Explanation: merged array = [1,2,3] and median is 2.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: nums1 = [1,2], nums2 = [3,4]
 * Output: 2.50000
 * Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * nums1.length == m
 * nums2.length == n
 * 0 <= m <= 1000
 * 0 <= n <= 1000
 * 1 <= m + n <= 2000
 * -10^6 <= nums1[i], nums2[i] <= 10^6
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l1 = nums1.size(), l2 = nums2.size();
        int i = 0, j = 0, k = 0;
        int final_arr[l1+l2];

        while (i<l1) {
            final_arr[k++] = nums1[i++];
        }
        while (j<l2) {
            final_arr[k++] = nums2[j++];
        }
        sort(final_arr,final_arr+(l1+l2));
        int len = l1+l2;
        if(len%2 !=0){
            return double(final_arr[len/2]);
        }
        else{
            return double(final_arr[len/2-1]+final_arr[len/2])/2;
        }
    }
};
// @lc code=end

