/* Update your query here */

update courses set credits = credits + 1 where department = 'Science';

select course_name, department, credits from courses limit 1;