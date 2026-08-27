SELECT
    employee_id,
    salary,
    NTILE(2) OVER (ORDER BY salary DESC) AS ntile_group,
    MAX(salary) OVER (ORDER BY employee_id ROWS BETWEEN 1 preceding AND CURRENT ROW) AS running_max
FROM
    employees ORDER BY employee_id;
    
    
    
    
    
    
    
    
    
    
    
    