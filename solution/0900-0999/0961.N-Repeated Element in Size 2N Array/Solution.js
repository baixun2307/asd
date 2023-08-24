/**
 * @param {number[]} nums
 * @return {number}
 */
var repeatedNTimes = function (nums) {
    const s = new Set();
    for (let i = 0; ; ++i) {
        if (s.has(nums[i])) {
            return nums[i];
        }
        s.add(nums[i]);
    }
};
