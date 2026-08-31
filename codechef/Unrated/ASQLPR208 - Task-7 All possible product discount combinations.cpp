SELECT 
    P.ProductName, 
    D.DiscountName, 
    D.DiscountPercentage, 
    P.Price * (1 - D.DiscountPercentage) AS DiscountedPrice 
FROM Products AS P
CROSS JOIN Discounts AS D;
