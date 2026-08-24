/* Write the queries to delete data according to the given instructions.
Write all the queries here and RUN/SUBMIT them all at once.*/



delete from students where address ='Not Provided' ;




select student_id, name , address from students ;



delete from enrollments where grade = 'B' ;




select enrollment_id, student_id, course_id,  grade from enrollments ;



delete from courses where credits < 4;

select 
course_id,	course_name,	course_code	,department	,credits	,faculty_id from courses ;




delete from students where email like '%@email.com';




select * from students;
