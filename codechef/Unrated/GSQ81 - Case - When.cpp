/* Write a query to categorize the students based on the marks into grades and output the count of students in each grade. Give the Alias name for the CASE as 'Grades"
- Marks Less than 50 - C,
- Marks between 50 and 80 - B,
- Marks more than 80 - A */


select 

case 

    when marks < 50 then 'C'
    
    when marks between 50 and 80 then 'B'
    
    when marks > 80 then 'A'
    
    ELSE 'NA'
    
    END AS 'Grades',
    
    count (*) as 'student_count' from marks  group by Grades; 
    