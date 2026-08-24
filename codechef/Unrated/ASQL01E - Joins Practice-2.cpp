-- 1.All orders with Customers Details: Get all of the orders table and also the details of respective customers if they exist. Use the customer and orders table.

-- 2.Products and Categories: Create a combined list of all products and all categories. Include all product names and all category names. Where there's a match, show both; otherwise, use NULLs.

-- 3.All category names with product details: display category_name, along with all product names and price from all the categories present in categories table.



select c1.customer_name  , o1.order_id, c1.customer_id ,  o1.product_name,  o1.order_date ,  o1.quantity from customers c1 inner join Orders o1 on c1.customer_id = o1.customer_id;


select p1.product_name , c1.category_name from products p1 join categories c1 on p1.category_id = c1.category_id;


select c1.category_name , p1.product_name , p1.price from categories c1 join products p1 on c1.category_id = p1.category_id;