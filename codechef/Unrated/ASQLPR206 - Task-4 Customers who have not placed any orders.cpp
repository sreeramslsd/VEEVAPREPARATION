SELECT 
    C.CustomerID, 
    C.FirstName, 
    C.LastName 
FROM 
    Customers AS C 
LEFT JOIN 
    Orders AS O ON C.CustomerID = O.CustomerID 
WHERE 
    O.OrderID IS NULL;
