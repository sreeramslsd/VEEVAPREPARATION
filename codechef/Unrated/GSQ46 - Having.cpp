 /* Write a query to find out the average Payout across department which has more than 3 employees from the table employee.
The output table should have the name of the department and their respective average pay. */





SELECT department , AVG(Payout) AS AVG_PAYOUT FROM EMPLOYEE GROUP BY DEPARTMENT HAVING COUNT (*) > 3;