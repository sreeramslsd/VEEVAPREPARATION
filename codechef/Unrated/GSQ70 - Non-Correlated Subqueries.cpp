


select f_name, f_type from food where f_id in (select f_id from ratings where f_rating<3);