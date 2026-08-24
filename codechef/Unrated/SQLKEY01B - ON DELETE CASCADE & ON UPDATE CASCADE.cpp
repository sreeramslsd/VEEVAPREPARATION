-- Write a DELETE query to delete John Doe's details from Customers table and see changes in Orders table.



delete from customers where customer_name = 'John Doe';



select * from orders;