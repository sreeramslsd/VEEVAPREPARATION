/* Write a query to join the table 'student' and 'course' using 'Course_id' to match both the tables and output the joined table. */



select * from student join course on student.Course_id = course.Course_id;