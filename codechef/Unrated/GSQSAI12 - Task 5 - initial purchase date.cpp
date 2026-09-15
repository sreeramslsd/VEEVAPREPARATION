 --purchase_id │ course_name │    purchase_date 

-- select * from purchases;




select course_name as course , strftime('%Y-%m-%d %H:%M:%S', MIN(purchase_date)) AS First_Purchase_Date FROM PURCHASES GROUP BY course ORDER BY First_Purchase_Date ASC ;
