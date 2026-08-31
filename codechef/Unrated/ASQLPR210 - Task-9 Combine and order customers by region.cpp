SELECT 
    CustomerID, 
    FirstName, 
    LastName, 
    City, 
    CASE 
        WHEN Region IS NULL THEN 'Not Specified' 
        ELSE Region 
    END AS Region, 
    Country 
FROM Customers 
WHERE Country IN ('USA', 'UK', 'France') 
ORDER BY Country, LastName ASC;
