/* Write a query to do the following:
 - JOIN the tables 'student' and 'course' using 'Course_id' to match both the tables and output the joined table.
 - LEFT JOIN the tables 'student' and 'course' using 'Course_id' to match both the tables and output the joined table. */
 
 
 
select * from student s1 join course c1 on s1.course_id = c1.course_id;



select * from student s1 left join course c1 on s1.course_id = c1.course_id;