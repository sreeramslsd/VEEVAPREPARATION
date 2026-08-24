 --purchase_id │ course_name │    purchase_date 

-- select * from purchases;

SELECT course_name as Course,  strftime('%Y-%m-%d %H:%M:%S', min(purchase_date)) as First_Purchase_Date from Purchases group by course order by First_Purchase_Date asc; 