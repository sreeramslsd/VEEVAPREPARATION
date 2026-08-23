/* Your order management system sometimes has a bug and does not capture the order_time
i.e. order_time is blank.
Write a query to output the order ids which faced this bug. */



select order_id from Orders where order_time is NULL;