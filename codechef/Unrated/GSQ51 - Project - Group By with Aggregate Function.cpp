/* Write a query to output the following
- Find the total outstanding fee of the students for each department
- Group by each department */




select department , sum (fee_outstanding)  as  fee_outstanding   from student group by department;