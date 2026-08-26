/* Write a query to find the sum of fee paid by the students, aged above 20 across departments.
Alias the sum column as 'Sum_Senior_Fee'.*/





--select department,  sum(fee) as Sum_Senior_Fee from student where age > 20 group by department;



select department , sum(case when age > 20 then fee else 0 end ) as sum_senior_fee from student group by department;