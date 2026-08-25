




select emp_name from Employee where emp_age < (select avg(emp_age) from employee where emp_dept = 'Sales' );

