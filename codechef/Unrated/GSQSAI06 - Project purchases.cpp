








select strftime('%m',Purchase_date ) as purchased_month from purchases where course_name = 'cpp'  order by purchase_date asc limit 1;