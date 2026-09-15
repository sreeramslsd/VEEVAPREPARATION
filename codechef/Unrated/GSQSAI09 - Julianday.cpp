/* Write a query which does the following
Find the difference between 25th dec,2024 and 24th sept,2023 in terms of days and name the column as Days_Difference */ 



  SELECT JULIANDAY('2024-12-25') - JULIANDAY('2023-09-24');