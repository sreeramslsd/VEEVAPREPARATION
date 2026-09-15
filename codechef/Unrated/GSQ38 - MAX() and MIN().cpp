/*Write a query to find the highest and lowest 'Hourly_pay' of the employees from the table 'employee'*/



select max(hourly_pay) as max_pay from employee;

select min(hourly_pay) as min_pay from employee;