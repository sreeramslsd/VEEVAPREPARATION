update products set stock_quantity = 0 where stock_quantity =10;

select * from products where stock_quantity = 0 limit 1;