/* Write a query to output the following on separate lines
- Total Payout for the Product department.
- Average Payout for Operations department. */





SELECT SUM(Payout) AS PRODUCT_TOTAL_PAY FROM EMPLOYEE WHERE department = 'Product';

SELECT AVG(Payout) AS OPS_AVG_PAY FROM EMPLOYEE WHERE department = 'Operations';