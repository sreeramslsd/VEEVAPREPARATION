








SELECT round(100 * (SUM(CASE WHEN Cuisine = 'American' THEN price ELSE 0 END))/ sum(price) , 2)AS 'AMERICAN_REVENUE' FROM Orders; 