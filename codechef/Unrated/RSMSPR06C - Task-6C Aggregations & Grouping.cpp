ROLLBACK TO S1;

/* Update your query below this line*/



select strftime('%Y-%m',order_date) as order_month , count(order_id) as total_orders from orders;