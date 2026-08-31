SELECT
    O.OrderID,
    O.CustomerID,
    O.OrderDate,
    OrderTotals.TotalOrderAmount
FROM Orders AS O
INNER JOIN 
(
    SELECT
        OrderID,
        SUM(Quantity * UnitPrice) AS TotalOrderAmount
    FROM OrderDetails
    GROUP BY OrderID
) AS OrderTotals ON O.OrderID = OrderTotals.OrderID
WHERE O.OrderID = (
    SELECT O2.OrderID
    FROM Orders AS O2
    INNER JOIN 
    (
        SELECT
            OrderID,
            SUM(Quantity * UnitPrice) AS TotalOrderAmount
        FROM OrderDetails
        GROUP BY OrderID
    ) AS OrderTotals2 ON O2.OrderID = OrderTotals2.OrderID
    WHERE O2.CustomerID = O.CustomerID
    ORDER BY OrderTotals2.TotalOrderAmount DESC
    LIMIT 1
);
