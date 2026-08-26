/* Write a query to output a table with all the details of the part time employees from the table 'employee'. */


select emp_id, emp_name from employee intersect select emp_id, emp_name from pt_employee;