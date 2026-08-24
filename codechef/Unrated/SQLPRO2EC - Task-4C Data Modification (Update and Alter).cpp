/* Update your query here */



update students set address = 'Unknown' where address = 'Not Provided';

select student_id, name, address from students where address = 'Unknown';