/* Write a query to output the following on separate lines
- The Average age of the students of the school
- Total Outstanding Fee of the students in 'Arts' department */


select avg(age) as avg_age from student ;


select sum(fee_outstanding) as fee_outstanding from student where department = 'Arts';