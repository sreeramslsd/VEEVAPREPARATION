/* Write a query which does the following
Output the count of highest number of purchases recorded in a month as Purchase_count and the month('%Y-%m') as purchase_month .   */


select strftime('%Y-%m', purchase_date ) as purchase_month , count(purchase_id) as purchase_count from purchases group by purchase_month order by purchase_count desc limit 1;