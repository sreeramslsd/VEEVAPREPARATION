-- Write a delete query to delete John Doe's details from Customers table and notice the changes in the Orders table



delete from customers where customer_name = 'John Doe';


select * from orders;