BEGIN TRANSACTION;
SAVEPOINT S1;
--Savepoint created incase any changes to the the database beyond this point has to be undone in the future.

/* Update your query here*/



delete from orders where order_date < '2024-01-20';

 select order_id  ,customer_id ,order_date , total_amount from orders;
 