/* Find the Minimum and the Maximum marks scored by the students in the department 'Science'.
Output these marks on separate lines. */



select min(marks) as min_marks from student where department='Science';


select max(marks) as max_marks from student where department='Science';