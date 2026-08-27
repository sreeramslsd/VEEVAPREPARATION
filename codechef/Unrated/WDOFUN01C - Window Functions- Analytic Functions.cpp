select employee_id, department, salary, 



lag(salary, 1) over (partition by department order by employee_id) as prev_salary , 




lead(salary, 1) over (partition by department order by employee_id) as next_salary    from employees;
