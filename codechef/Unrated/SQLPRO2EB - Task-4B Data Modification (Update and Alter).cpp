/* Write your query here */




alter table students add column scholarship text default None;

select student_id, name , scholarship from students limit 1;