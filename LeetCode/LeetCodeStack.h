﻿#pragma once
#ifndef LeetCodeStack_H
#define LeetCodeStack_H
#include <stdint.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <algorithm> 
#include <functional> 
#include <bitset> 
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stdexcept>
#include <string>
#include <unordered_map> 
#include <unordered_set> 
#include <vector> 
#include <stack> 
#include "leetcode.h"
using namespace std;
/// <summary>
/// The class is to implement stack based algorithm  
/// </summary>
class LeetCodeStack
{
public:
#pragma region Stack
    /// <summary>
    /// Leet code #20. Valid Parentheses    
    /// Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid. 
    /// The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.
    /// </summary>
    bool isValidParentheses(string s);

    /// <summary>
    /// Leet code #32. Longest Valid Parentheses  
    /// Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.
    /// For "(()", the longest valid parentheses substring is "()", which has length = 2.  
    /// Another example is ")()())", where the longest valid parentheses substring is "()()", which has length = 4.
    /// </summary> 
    int longestValidParentheses(string s);

    /// <summary>
    /// Leet code #150. Evaluate Reverse Polish Notation Add to List 
    /// Evaluate the value of an arithmetic expression in Reverse Polish Notation. 
    /// Valid operators are +, -, *, /. Each operand may be an integer or another expression. 
    /// Some examples:
    /// ["2", "1", "+", "3", "*"] -> ((2 + 1) * 3) -> 9
    /// ["4", "13", "5", "/", "+"] -> (4 + (13 / 5)) -> 6
    /// </summary>
    int evalRPN(vector<string>& tokens);

    /// <summary>
    /// Leet code #394. Decode String    
    /// Given an encoded string, return it's decoded string.
    /// The encoding rule is: k[encoded_string], where the encoded_string inside the square brackets is 
    /// being repeated exactly k times. Note that k is guaranteed to be a positive integer.
    ///
    /// You may assume that the input string is always valid; No extra white spaces, 
    /// square brackets are well-formed, etc.
    ///
    /// Furthermore, you may assume that the original data does not contain any digits and that 
    /// digits are only for those repeat numbers, k. For example, there won't be input like 3a or 2[4]. 
    ///
    /// Examples: 
    /// s = "3[a]2[bc]", return "aaabcbc".
    /// s = "3[a2[c]]", return "accaccacc".
    /// s = "2[abc]3[cd]ef", return "abcabccdcdcdef".
    /// </summary>
    string decodeString(string s);

    /// <summary>
    /// Leet code #385. Mini Parser
    /// Given a nested list of integers represented as a string, implement a parser to deserialize it.
    /// Each element is either an integer, or a list -- whose elements may also be integers or other lists. 
    /// Note: You may assume that the string is well-formed: 
    /// String is non-empty.
    /// String does not contain white spaces.
    /// String contains only digits 0-9, [, - ,, ].
    /// Example 1: 
    /// Given s = "324",
    /// You should return a NestedInteger object which contains a single integer 324.
    /// Example 2: 
    /// Given s = "[123,[456,[789]]]",
    /// Return a NestedInteger object containing a nested list with 2 elements:
    /// 1. An integer containing value 123.
    /// 2. A nested list containing two elements:
    ///    i.  An integer containing value 456.
    ///    ii. A nested list with one element:
    ///         a. An integer containing value 789.
    /// </summary>
    NestedInteger deserializeNestedInteger(string s);

    /// <summary>
    /// Leet code #439. Ternary Expression Parser 
    /// </summary>
    void calculateTernary(string& result, string& operators);

    /// <summary>
    /// Leet code #439. Ternary Expression Parser 
    /// 
    /// Given a string representing arbitrarily nested ternary expressions, 
    /// calculate the result of the expression. You can always assume that 
    /// the given expression is valid and only consists of digits 0-9, ?, :, 
    /// T and F (T and F represent True and False respectively). 
    /// Note: 
    /// 1.The length of the given string is ≤ 10000.
    /// 2.Each number will contain only one digit.
    /// 3.The conditional expressions group right-to-left (as usual in 
    ///   most languages).
    /// 4.The condition will always be either T or F. That is, the condition 
    ///   will never be a digit.
    /// 5.The result of the expression will always evaluate to either a 
    ///   digit 0-9, T or F.
    ///
    /// Example 1: 
    /// Input: "T?2:3"
    /// Output: "2"
    /// Explanation: If true, then result is 2; otherwise result is 3.
    /// Example 2: 
    /// Input: "F?1:T?4:5"
    /// Output: "4"
    /// Explanation: The conditional expressions group right-to-left. Using 
    /// parenthesis, it is read/evaluated as:
    /// "(F ? 1 : (T ? 4 : 5))"                   "(F ? 1 : (T ? 4 : 5))"
    /// -> "(F ? 1 : 4)"                 or       -> "(T ? 4 : 5)"
    /// -> "4"                                    -> "4"
    /// Example 3: 
    /// Input: "T?T?F:5:3"
    /// Output: "F"
    /// Explanation: The conditional expressions group right-to-left. Using 
    /// parenthesis, it is read/evaluated as:
    /// "(T ? (T ? F : 5) : 3)"                   "(T ? (T ? F : 5) : 3)"
    /// -> "(T ? F : 3)"                 or       -> "(T ? F : 5)"
    /// -> "F"                                    -> "F"
    /// </summary>
    string parseTernaryII(string expression);

    /// <summary>
    /// Leet code #439. Ternary Expression Parser       
    /// </summary>
    string parseToken(string expression, int& index);

    /// <summary>
    /// Leet code #439. Ternary Expression Parser       
    /// 
    /// Given a string representing arbitrarily nested ternary expressions, calculate the 
    /// result of the expression. You can always assume that the given expression is valid 
    /// and only consists of digits 0-9, ?, :, T and F (T and F represent True and False respectively). 
    /// Note: 
    /// 1.The length of the given string is ≤ 10000.
    /// 2.Each number will contain only one digit.
    /// 3.The conditional expressions group right-to-left (as usual in most languages).
    /// 4.The condition will always be either T or F. That is, the condition will never be a digit.
    /// 5.The result of the expression will always evaluate to either a digit 0-9, T or F.
    ///
    /// Example 1: 
    /// Input: "T?2:3"
    /// Output: "2"
    /// Explanation: If true, then result is 2; otherwise result is 3.
    /// Example 2: 
    /// Input: "F?1:T?4:5"
    /// Output: "4"
    /// Explanation: The conditional expressions group right-to-left. Using parenthesis, it is read/evaluated as:
    /// "(F ? 1 : (T ? 4 : 5))"                   "(F ? 1 : (T ? 4 : 5))"
    /// -> "(F ? 1 : 4)"                 or       -> "(T ? 4 : 5)"
    /// -> "4"                                    -> "4"
    /// Example 3: 
    /// Input: "T?T?F:5:3"
    /// Output: "F"
    /// Explanation: The conditional expressions group right-to-left. Using parenthesis, it is read/evaluated as:
    /// "(T ? (T ? F : 5) : 3)"                   "(T ? (T ? F : 5) : 3)"
    /// -> "(T ? F : 3)"                 or       -> "(T ? F : 5)"
    /// -> "F"                                    -> "F"
    /// </summary>
    string parseTernary(string expression);

    /// <summary>
    /// Leet code #316. Remove Duplicate Letters     
    /// 
    /// Given a string which contains only lowercase letters, remove duplicate letters so 
    /// that every letter appear once and only once. You must make sure your result is the 
    /// smallest in lexicographical order among all possible results. 
    /// 
    /// Example:
    ///
    /// Given "bcabc"
    /// Return "abc" 
    /// 
    /// Given "cbacdcbc"
    /// Return "acdb" 
    /// </summary>
    string removeDuplicateLetters(string s);

    /// <summary>
    /// Leet code #735. Asteroid Collision
    ///
    /// We are given an array asteroids of integers representing asteroids in 
    /// a row. 
    /// For each asteroid, the absolute value represents its size, and the sign
    /// represents its direction (positive meaning right, negative meaning 
    /// left). Each asteroid moves at the same speed. 
    ///
    /// Find out the state of the asteroids after all collisions. If two 
    /// asteroids meet, the smaller one will explode. If both are the same 
    /// size, both will explode. Two asteroids moving in the same direction 
    /// will never meet. 
    ///
    /// Example 1:
    /// Input: 
    /// asteroids = [5, 10, -5]
    /// Output: [5, 10]
    /// Explanation: 
    /// The 10 and -5 collide resulting in 10.  The 5 and 10 never collide.
    /// 
    /// Example 2:
    /// Input: 
    /// asteroids = [8, -8]
    /// Output: []
    /// Explanation: 
    /// The 8 and -8 collide exploding each other.
    ///
    /// Example 3:
    /// Input: 
    /// asteroids = [10, 2, -5]
    /// Output: [10]
    /// Explanation: 
    /// The 2 and -5 collide resulting in -5.  The 10 and -5 collide resulting 
    /// in 10.
    ///
    /// Example 4:
    /// Input: 
    /// asteroids = [-2, -1, 1, 2]
    /// Output: [-2, -1, 1, 2]
    /// Explanation: 
    /// The -2 and -1 are moving left, while the 1 and 2 are moving right.
    /// Asteroids moving the same direction never meet, so no asteroids will 
    /// meet each other.
    ///
    /// Note: 
    /// The length of asteroids will be at most 10000.
    /// Each asteroid will be a non-zero integer in the range [-1000, 1000]..
    /// </summary> 
    vector<int> asteroidCollision(vector<int>& asteroids);

    /// <summary>
    /// Leet code #921. Minimum Add to Make Parentheses Valid
    /// 
    /// Given a string S of '(' and ')' parentheses, we add the minimum number of 
    /// parentheses ( '(' or ')', and in any positions ) so that the resulting 
    /// parentheses string is valid.
    ///
    /// Formally, a parentheses string is valid if and only if:
    ///
    /// It is the empty string, or
    /// It can be written as AB (A concatenated with B), where A and B are valid 
    /// strings, or
    /// It can be written as (A), where A is a valid string.
    /// Given a parentheses string, return the minimum number of parentheses we 
    /// must add to make the resulting string valid.
    ///
    /// Example 1:
    /// Input: "())"
    /// Output: 1
    ///
    /// Example 2:
    /// Input: "((("
    /// Output: 3
    ///
    /// Example 3:
    /// Input: "()"
    /// Output: 0
    /// Example 4:
    ///
    /// Input: "()))(("
    /// Output: 4
    /// 
    /// Note:
    ///
    /// 1. S.length <= 1000
    /// 2. S only consists of '(' and ')' characters.
    /// </summary>
    int minAddToMakeValid(string S);

    /// <summary>
    /// Leet code #946. Validate Stack Sequences
    /// 
    /// Given two sequences pushed and popped with distinct values, return 
    /// true if and only if this could have been the result of a sequence 
    /// of push and pop operations on an initially empty stack.
    ///
    /// Example 1:
    /// Input: pushed = [1,2,3,4,5], popped = [4,5,3,2,1]
    /// Output: true
    /// Explanation: We might do the following sequence:
    /// push(1), push(2), push(3), push(4), pop() -> 4,
    /// push(5), pop() -> 5, pop() -> 3, pop() -> 2, pop() -> 1
    ///
    /// Example 2:
    /// Input: pushed = [1,2,3,4,5], popped = [4,3,5,1,2]
    /// Output: false
    /// Explanation: 1 cannot be popped before 2.
    ///
    /// Note:
    ///
    /// 1. 0 <= pushed.length == popped.length <= 1000
    /// 2. 0 <= pushed[i], popped[i] < 1000
    /// 3. pushed is a permutation of popped.
    /// 4. pushed and popped have distinct values.
    /// </summary>
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped);

    /// <summary>
    /// Leet code #1003. Check If Word Is Valid After Substitutions
    /// 
    /// We are given that the string "abc" is valid.
    ///
    /// From any valid string V, we may split V into two pieces X and Y such 
    /// that X + Y (X concatenated with Y) is equal to V.  (X or Y may be empty.)  
    /// Then, X + "abc" + Y is also valid.
    ///
    /// If for example S = "abc", then examples of valid strings are: "abc", 
    /// "aabcbc", "abcabc", "abcabcababcc".  Examples of invalid strings are: 
    /// "abccba", "ab", "cababc", "bac".
    ///
    /// Return true if and only if the given string S is valid.
    ///
    ///
    /// Example 1:
    ///
    /// Input: "aabcbc"
    /// Output: true
    /// Explanation: 
    /// We start with the valid string "abc".
    /// Then we can insert another "abc" between "a" and "bc", resulting in 
    /// "a" + "abc" + "bc" which is "aabcbc".
    ///
    /// Example 2:
    ///
    /// Input: "abcabcababcc"
    /// Output: true
    /// Explanation: 
    /// "abcabcabc" is valid after consecutive insertings of "abc".
    /// Then we can insert "abc" before the last letter, resulting in 
    /// "abcabcab" + "abc" + "c" which is "abcabcababcc".
    ///
    /// Example 3:
    /// 
    /// Input: "abccba"
    /// Output: false
    ///
    /// Example 4:
    ///
    /// Input: "cababc"
    /// Output: false
    /// 
    ///
    /// Note:
    ///
    /// 1. 1 <= S.length <= 20000
    /// 2. S[i] is 'a', 'b', or 'c'
    /// </summary>
    bool isValidAbc(string S);

    /// <summary>
    /// Leet code #1047. Remove All Adjacent Duplicates In String
    /// 
    /// Given a string S of lowercase letters, a duplicate removal consists of 
    /// choosing two adjacent and equal letters, and removing them.
    ///
    /// We repeatedly make duplicate removals on S until we no longer can.
    ///
    /// Return the final string after all such duplicate removals have been made.  
    /// It is guaranteed the answer is unique.
    /// 
    /// Example 1:
    ///
    /// Input: "abbaca"
    /// Output: "ca"
    /// Explanation: 
    /// For example, in "abbaca" we could remove "bb" since the letters are 
    /// adjacent and equal, and this is the only possible move.  The result of 
    /// this move is that the string is "aaca", of which only "aa" is possible, 
    /// so the final string is "ca".
    /// 
    ///
    /// Note:
    ///
    /// 1. 1 <= S.length <= 20000
    /// 2. S consists only of English lowercase letters.
    /// </summary>
    string removeDuplicates(string S);

    /// <summary>
    /// Leet code #1081. Smallest Subsequence of Distinct Characters
    /// 
    /// Return the lexicographically smallest subsequence of text that contains 
    /// all the distinct characters of text exactly once.
    ///
    /// Example 1:
    /// Input: "cdadabcc"
    /// Output: "adbc"
    ///
    /// Example 2:
    /// Input: "abcd"
    /// Output: "abcd"
    ///
    /// Example 3:
    /// Input: "ecbacba"
    /// Output: "eacb"
    ///
    /// Example 4:
    /// Input: "leetcode"
    /// Output: "letcod"
    /// 
    /// Note:
    ///
    /// 1. 1 <= text.length <= 1000
    /// 2. text consists of lowercase English letters.
    /// </summary>
    string smallestSubsequence(string text);

    /// <summary>
    /// Leet code #1190. Reverse Substrings Between Each Pair of Parentheses
    /// 
    /// Given a string s that consists of lower case English letters and 
    /// brackets. 
    /// Reverse the strings in each pair of matching parentheses, starting from 
    /// the innermost one.
    /// Your result should not contain any bracket.
    /// 
    /// Example 1:
    /// Input: s = "(abcd)"
    /// Output: "dcba"
    ///
    /// Example 2:
    /// Input: s = "(u(love)i)"
    /// Output: "iloveu"
    ///
    /// Example 3:
    /// Input: s = "(ed(et(oc))el)"
    /// Output: "leetcode"
    /// Example 4:
    /// Input: s = "a(bcdefghijkl(mno)p)q"
    /// Output: "apmnolkjihgfedcbq"
    /// 
    /// Constraints:
    /// 1. 0 <= s.length <= 2000
    /// 2. s only contains lower case English characters and parentheses.
    /// 3. It's guaranteed that all parentheses are balanced.
    /// </summary>
    string reverseParentheses(string s);

    /// <summary>
    /// Leet code #1209. Remove All Adjacent Duplicates in String II
    ///
    /// Given a string s, a k duplicate removal consists of choosing k adjacent 
    /// and equal letters from s and removing them causing the left and the 
    /// right side of the deleted substring to concatenate together.
    ///
    /// We repeatedly make k duplicate removals on s until we no longer can.
    ///
    /// Return the final string after all such duplicate removals have been made.
    ///
    /// It is guaranteed that the answer is unique.
    /// 
    /// Example 1:
    /// Input: s = "abcd", k = 2
    /// Output: "abcd"
    /// Explanation: There's nothing to delete.
    ///
    /// Example 2:
    /// Input: s = "deeedbbcccbdaa", k = 3
    /// Output: "aa"
    /// Explanation: 
    /// First delete "eee" and "ccc", get "ddbbbdaa"
    /// Then delete "bbb", get "dddaa"
    /// Finally delete "ddd", get "aa"
    ///
    /// Example 3:
    /// Input: s = "pbbcggttciiippooaais", k = 2
    /// Output: "ps"
    /// 
    ///
    /// Constraints:
    /// 1. 1 <= s.length <= 10^5
    /// 2. 2 <= k <= 10^4
    /// 3. s only contains lower case English letters.
    /// </summary>
    string removeDuplicates(string s, int k);

    /// <summary>
    /// Leet code #339. Nested List Weight Sum  
    /// </summary>
    int depthSum(vector<NestedInteger>& nestedList, int depth);

    /// <summary>
    /// Leet code #339. Nested List Weight Sum  
    /// 
    /// Given a nested list of integers, return the sum of all integers in the list weighted by their depth.
    /// Each element is either an integer, or a list -- whose elements may also be integers or other lists.
    /// Example 1:
    /// Given the list [[1,1],2,[1,1]], return 10. (four 1's at depth 2, one 2 at depth 1)
    /// Example 2:
    /// Given the list [1,[4,[6]]], return 27. (one 1 at depth 1, one 4 at depth 2, and one 6 at depth 3; 1 + 4*2 + 6*3 = 27) 
    /// </summary>
    int depthSum(vector<NestedInteger>& nestedList);

    /// <summary>
    /// Leet code #402. Remove K Digits     
    /// 
    /// Given a non-negative integer num represented as a string, remove k digits from the number so that the new number is the smallest possible. 
    /// Note:
    /// The length of num is less than 10002 and will be ≥ k.
    /// The given num does not contain any leading zero.
    /// Example 1: 
    /// Input: num = "1432219", k = 3
    /// Output: "1219"
    /// Explanation: Remove the three digits 4, 3, and 2 to form the new number 1219 which is the smallest.
    ///
    /// Example 2: 
    /// Input: num = "10200", k = 1
    /// Output: "200"
    /// Explanation: Remove the leading 1 and the number is 200. Note that the output must not contain leading zeroes.
    ///
    /// Example 3: 
    /// Input: num = "10", k = 2
    /// Output: "0"
    /// Explanation: Remove all the digits from the number and it is left with nothing which is 0.
    /// </summary>
    string removeKdigits(string num, int k);

    /// <summary>
    /// Leet code #907. Sum of Subarray Minimums
    /// 
    /// Given an array of integers A, find the sum of min(B), where B ranges over 
    /// every (contiguous) subarray of A.
    ///
    /// Since the answer may be large, return the answer modulo 10^9 + 7.
    ///
    /// Example 1:
    ///
    /// Input: [3,1,2,4]
    /// Output: 17
    /// Explanation: Subarrays are [3], [1], [2], [4], [3,1], [1,2], [2,4], 
    /// [3,1,2], [1,2,4], [3,1,2,4]. 
    /// Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1.  Sum is 17.
    /// 
    /// Note:
    ///
    /// 1. 1 <= A.length <= 30000
    /// 2. 1 <= A[i] <= 30000
    /// </summary>
    int sumSubarrayMins(vector<int>& A);

    /// <summary>
    /// Leet code #636. Exclusive Time of Functions
    /// 
    /// Given the running logs of n functions that are executed in a 
    /// nonpreemptive single threaded CPU, find the exclusive time of these 
    /// functions. 
    /// Each function has a unique id, start from 0 to n-1. A function may be 
    /// called recursively or by another function.
    /// A log is a string has this format: function_id:start_or_end:timestamp.
    /// For example, "0:start:0" means function 0 starts from the very 
    /// beginning of time 0. 
    /// "0:end:0" means function 0 ends to the very end of time 0. 
    /// Exclusive time of a function is defined as the time spent within 
    /// this function, the time spent by calling other functions should not 
    /// be considered as this function's exclusive time. You should return the 
    /// exclusive time of each function sorted by their function id.
    ///
    /// Example 1:
    /// Input:
    /// n = 2
    /// logs = 
    /// ["0:start:0",
    /// "1:start:2",
    /// "1:end:5",
    /// "0:end:6"]
    /// Output:[3, 4]
    /// Explanation:
    /// Function 0 starts at time 0, then it executes 2 units of time and 
    /// reaches the end of time 1. 
    /// Now function 0 calls function 1, function 1 starts at time 2, executes 
    /// 4 units of time and end at time 5.
    /// Function 0 is running again at time 6, and also end at the time 6, thus 
    /// executes 1 unit of time. 
    /// So function 0 totally execute 2 + 1 = 3 units of time, and function 1 
    /// totally execute 4 units of time.
    ///
    /// Note:
    /// 1. Input logs will be sorted by timestamp, NOT log id.
    /// 2. Your output should be sorted by function id, which means the 0th 
    /// element of your output corresponds to the exclusive time of function 0.
    /// 3. Two functions won't start or end at the same time.
    /// 4. Functions could be called recursively, and will always end.
    /// 5. 1 <= n <= 100
    /// </summary>
    vector<int> exclusiveTime(int n, vector<string>& logs);

    /// <summary>
    /// Leet code #1249. Minimum Remove to Make Valid Parentheses
    ///  
    /// Given a string s of '(' , ')' and lowercase English characters. 
    ///
    /// Your task is to remove the minimum number of parentheses ( '(' or ')', 
    /// in any positions ) so that the resulting parentheses string is valid 
    /// and return any valid string.
    ///
    /// Formally, a parentheses string is valid if and only if:
    ///
    /// It is the empty string, contains only lowercase characters, or
    /// It can be written as AB (A concatenated with B), where A and B are valid 
    /// strings, or It can be written as (A), where A is a valid string.
    /// 
    /// Example 1:
    ///
    /// Input: s = "lee(t(c)o)de)"
    /// Output: "lee(t(c)o)de"
    /// Explanation: "lee(t(co)de)" , "lee(t(c)ode)" would also be accepted.
    ///
    /// Example 2:
    ///
    /// Input: s = "a)b(c)d"
    /// Output: "ab(c)d"
    ///
    /// Example 3:
    ///
    /// Input: s = "))(("
    /// Output: ""
    /// Explanation: An empty string is also valid.
    ///
    /// Example 4:
    ///
    /// Input: s = "(a(b(c)d)"
    /// Output: "a(b(c)d)"
    /// 
    /// Constraints:
    ///
    /// 1. 1 <= s.length <= 10^5
    /// 2. s[i] is one of  '(' , ')' and lowercase English letters.
    /// </summary>
    string minRemoveToMakeValid(string s);

    /// <summary>
    /// Leet code #739. Daily Temperatures
    ///
    /// Given a list of daily temperatures, produce a list that, for each day 
    /// in the input, tells you how many days you would have to wait until a 
    /// warmer temperature. If there is no future day for which this is 
    /// possible, put 0 instead. 
    /// For example, given the list temperatures = [73, 74, 75, 71, 69, 72, 
    /// 76, 73], your output should be [1, 1, 4, 2, 1, 1, 0, 0]. 
    /// Note: The length of temperatures will be in the range [1, 30000]. Each 
    /// temperature will be an integer in the range [30, 100]. 
    /// </summary> 
    vector<int> dailyTemperatures(vector<int>& temperatures);

    /// <summary>
    /// Leet code #1425. Constrained Subset Sum
    /// 
    /// Hard
    ///
    /// Given an integer array nums and an integer k, return the maximum sum 
    /// of a non-empty subset of that array such that for every two 
    /// consecutive integers in the subset, nums[i] and nums[j], where i < j, 
    /// the condition j - i <= k is satisfied.
    ///
    /// A subset of an array is obtained by deleting some number of elements 
    /// (can be zero) from the array, leaving the remaining elements in their 
    /// original order.
    /// Example 1:
    ///
    /// Input: nums = [10,2,-10,5,20], k = 2
    /// Output: 37
    /// Explanation: The subset is [10, 2, 5, 20].
    /// Example 2:
    ///
    /// Input: nums = [-1,-2,-3], k = 1
    /// Output: -1
    /// Explanation: The subset must be non-empty, so we choose the largest 
    /// number.
    ///
    /// Example 3:
    ///
    /// Input: nums = [10,-2,-10,-5,20], k = 2
    /// Output: 23
    /// Explanation: The subset is [10, -2, -5, 20].
    /// 
    /// Constraints:
    /// 1. 1 <= k <= nums.length <= 10^5
    /// 2. -10^4 <= nums[i] <= 10^4
    /// </summary>
    int constrainedSubsetSum(vector<int>& nums, int k);

    /// <summary>
    /// Leet code #239. Sliding Window Maximum 
    ///
    /// Given an array nums, there is a sliding window of size k which is 
    /// moving from the very left of the array to the very right. 
    /// You can only see the k numbers in the window. Each time the sliding 
    /// window moves right by one position.
    /// For example,
    /// Given nums = [1,3,-1,-3,5,3,6,7], and k = 3.
    /// Window position                Max
    /// ---------------               -----
    /// [1  3  -1] -3  5  3  6  7       3
    ///  1 [3  -1  -3] 5  3  6  7       3
    ///  1  3 [-1  -3  5] 3  6  7       5
    ///  1  3  -1 [-3  5  3] 6  7       5
    ///  1  3  -1  -3 [5  3  6] 7       6
    ///  1  3  -1  -3  5 [3  6  7]      7
    /// Therefore, return the max sliding window as [3,3,5,5,6,7].
    /// Note: 
    /// You may assume k is always valid, ie: 1 ≤ k ≤ input array's size for non-empty array.
    /// Follow up:
    /// Could you solve it in linear time?
    /// Hint:
    /// 1.How about using a data structure such as deque (double-ended queue)?
    /// 2.The queue size need not be the same as the window’s size.
    /// 3.Remove redundant elements and the queue should store only elements that need to be considered.
    /// </summary> 
    vector<int> maxSlidingWindow(vector<int>& nums, int k);

#pragma endregion
};
#endif  // LeetCodeStack
