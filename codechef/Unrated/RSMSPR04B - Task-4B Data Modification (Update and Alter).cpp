/* Update your query here*/


alter table orders add column discount real default 0;


select order_id, total_amount,discount from orders limit 1;