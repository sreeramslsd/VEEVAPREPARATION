/* Write a query to find the percentage of fee paid by the students, aged above 20  to the total fee by all the students across department.\
Alias the resulting percentage column as Senior_Fee_Percentage*/




select department,  (100 *  (sum(case when age > 20 then fee else 0 end))/ sum(fee)) as senior_fee_percentage from student group by department;


