﻿
/*  
    二进制中一的个数
    请实现一个函数，输入一个整数，输出该数二进制表示中 1 的个数。例如，把 9 表示成二进制是 1001，有 2 位是 1。因此，如果输入 9，则该函数输出 2。

    示例 1：

    输入：00000000000000000000000000001011
    输出：3
    解释：输入的二进制串 00000000000000000000000000001011 中，共有三位为 '1'。
    
    来源：力扣（LeetCode）

*/
int hammingWeight(uint32_t n) {
    int ret = 0;
    while (n != 0) {
        ret += n & 1;
        n >>= 1;
    }
    return ret;
}