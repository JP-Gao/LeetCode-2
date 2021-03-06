-----------------------------------------------------------------------
-- 	LeetCode 176. Second Highest Salary
-- 	Easy
--
-- 	SQL Schema
--
-- 	Write a SQL query to get the second highest salary from the Employee table.
--
--  +----+--------+
--  | Id | Salary |
--  +----+--------+
--  | 1  | 100    |
--  | 2  | 200    |
--  | 3  | 300    |
--  +----+--------+
--
--  For example, given the above Employee table, the query should return 200 
--  as the second highest salary. If there is no second highest salary, then 
--  the query should return null.
--
--  +---------------------+
--  | SecondHighestSalary |
--  +---------------------+
--  | 200                 |
--  +---------------------+
------------------------------------------------------------------
/* Write your T-SQL query statement below */
DECLARE  @SecondHighestSalary BIGINT;
SELECT  @SecondHighestSalary = Salary 
FROM 
(
    SELECT
    Salary,
    DENSE_RANK() OVER (ORDER BY Salary DESC) AS Rank
    FROM Employee
) AS T
WHERE Rank = 2
SELECT  @SecondHighestSalary AS SecondHighestSalary
;
