select order_id , customer_id, order_date from Orders where order_date between '2024-01-01-' and '2024-01-31';


select max(order_date) as most_recent_order from Orders ;

select order_date , count(order_id) as order_count from Orders where order_date between '2024-01-15' and '2024-01-17' group by order_date;

select JULIANDAY(MAX(ORDER_DATE)) - JULIANDAY(MIN(ORDER_DATE)) as days_between from Orders;  

select order_id, customer_id, order_date, total_amount from Orders where order_date > DATE('2024-01-24', '-6 days') and order_date < Date('2024-01-24');

