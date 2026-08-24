/* Write your query here */




alter table enrollments add column status text default 'Active';



select enrollment_id, student_id, course_id, status from enrollments where status ='Active' limit 1;