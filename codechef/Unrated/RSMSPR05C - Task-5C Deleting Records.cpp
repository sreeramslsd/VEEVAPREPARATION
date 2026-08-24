BEGIN TRANSACTION;
SAVEPOINT S1;
--Savepoint created incase any changes to the the database beyond this point has to be undone in the future.

DELETE FROM Orders
WHERE order_date < '2024-01-20';

-- Delete customers who have no records in the Orders table
DELETE FROM Customers 
WHERE customer_id not in (select distinct customer_id from orders);

-- Retrieve the remaining customers
SELECT customer_id, name 
FROM Customers;