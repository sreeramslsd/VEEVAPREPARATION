/* Write a query to output the following
- Department and average payout on a single line
- Where total payout of the department is more than 40. */
 
 




SELECT department, AVG(PAYOUT) AS AVG_PAYOUT FROM EMPLOYEE GROUP BY DEPARTMENT HAVING SUM(PAYOUT) > 40;