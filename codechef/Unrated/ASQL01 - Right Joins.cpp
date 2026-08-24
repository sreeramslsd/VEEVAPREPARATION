/* Write the queries to do the following:
 - JOIN the tables 'student' and 'course' using 'Course_id' to match both the tables and output the joined table.
 - RIGHT JOIN the tables 'student' and 'course' using 'Course_id' to match both the tables and output the joined table. */
 
 
 
 select * from student inner join course on student.course_id = course.course_id;
 
 
 
 select * from student right join course on student.course_id = course.course_id;