SELECT Department, 
       ROUND(AVG(Marks), 2) AS avg_marks 
FROM student 
GROUP BY Department 
HAVING AVG(Fee_outstanding) < 500;