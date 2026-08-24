/* Update your query here*/


alter table customers add column new_address text default 'Unknown';

select name, address , new_address from customers limit 1;