UPDATE Products
SET price = price * 1.10
WHERE category = 'Electronics';

SELECT name, price, stock_quantity
FROM Products 
WHERE category = 'Electronics'
LIMIT 1;