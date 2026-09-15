/* Debug the below query */

select department, avg(age) as avg_age from employee group by department having count(*)>3;