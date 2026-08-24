/* Update your query here */





alter table Orders add column discount real default 0;



update Orders set discount = (total_amount * 0.05) where total_amount > 900;



select order_id, total_amount, discount from Orders where discount > 0 limit 1;