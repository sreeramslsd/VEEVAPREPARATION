SELECT 
    STRFTIME('%Y-%m-%d', purchase_date) AS Highest_Purchased_Date,
    COUNT(purchase_id) AS Purchased_Count 
FROM
    purchases 
GROUP BY 
    Highest_Purchased_Date 
ORDER BY 
    Purchased_Count DESC 
LIMIT 1;