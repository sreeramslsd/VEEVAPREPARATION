-- Write the query to divide products into four price groups (quartiles) within each category.
-- Create a temporary column called `PriceQuartile` 
-- Use the `NTILE` function
-- Headers expected in output: | CategoryID | ProductName | Price | PriceQuartile |

SELECT
    CategoryID,
    ProductName,
    Price,
    NTILE(4) OVER (PARTITION BY CategoryID ORDER BY Price) AS PriceQuartile
FROM
    Products;
