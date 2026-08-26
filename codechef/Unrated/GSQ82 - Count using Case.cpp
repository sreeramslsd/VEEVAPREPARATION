/* Write a query to count the number of students across departments who has scored more than 80 marks.*/





select department , count(case when marks > 80 then 1 else null end) as dept_highscore_count from student group by department order by dept_highscore_count asc; 