UPDATE Customers
SET new_address = NULL
WHERE new_address = 'Unknown';

/* Update your query below this line*/



update customers set new_address = '23 Walnut Lane' where new_address is null and Customer_id=10 and name='Henry Adams';



select *  from Customers where Customer_id=10;
