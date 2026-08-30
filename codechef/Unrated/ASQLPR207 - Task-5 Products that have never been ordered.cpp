SELECT
    P.ProductID,
    P.ProductName
FROM
    OrderDetails AS OD
RIGHT JOIN Products AS P 
    ON OD.ProductID = P.ProductID
WHERE
    OD.OrderID IS NULL;
