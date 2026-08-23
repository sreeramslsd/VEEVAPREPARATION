/* Write a query to output the following on separate lines
- Total Payout for the Product department.
- Average Payout for Operations department. */



select sum(payout) as product_total_pay from employee where department ='Product';

select avg(payout) as ops_avg_pay from  employee where department ='Operations' ;