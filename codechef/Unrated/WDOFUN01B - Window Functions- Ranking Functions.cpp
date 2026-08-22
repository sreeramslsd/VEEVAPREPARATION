SELECT
    employee_id,
    department,
    salary,
    -- ROW_NUMBER(): Assigns unique sequential numbers within each department.
    -- Ordered by salary in descending order.
    ROW_NUMBER() OVER (PARTITION BY department ORDER BY salary DESC) AS row_num,

    -- RANK(): Leaves gaps in ranking for ties.
    -- (Example: If salaries were equal, it would skip ranks.)
    RANK() OVER (PARTITION BY department ORDER BY salary DESC) AS rank,

    -- DENSE_RANK(): Ensures no gaps in ranking.
    -- Even if there were ties, the ranks would be consecutive.
    DENSE_RANK() OVER (PARTITION BY department ORDER BY salary DESC) AS dense_rank

FROM
    Employees;