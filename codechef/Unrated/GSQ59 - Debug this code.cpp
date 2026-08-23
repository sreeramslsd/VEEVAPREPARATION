/* Debug the below query */

SELECT  Department, Avg(Age) as 'avg_age'
FROM employee group by Department
HAVING Count(id) > 3;