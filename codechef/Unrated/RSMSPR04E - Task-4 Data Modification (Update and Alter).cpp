-- Add the discount column with a REAL data type and default value of 0
ALTER TABLE Orders ADD COLUMN discount REAL DEFAULT 0;

-- Calculate 5% discount for all orders above 900
UPDATE Orders 
SET discount = total_amount * 0.05 
WHERE total_amount > 900;

-- Retrieve the required columns for all orders with a discount
SELECT order_id, total_amount, discount 
FROM Orders 
WHERE discount > 0;