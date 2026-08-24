/* Write a query to join the tables 'student' and 'course' and output the same. Check if you can find the course with id ENG201 in the output */



select * from student s1 join course c1 on s1.course_id = c1.course_id;
