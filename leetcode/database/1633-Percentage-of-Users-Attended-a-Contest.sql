# Write your MySQL query statement below





-- select r.contest_id , round( (count(r.user_id) *100)/ (select count(u.user_id) from users) , 2)
--       as percentage from users u join register r  on u.user_id=r.user_id;



      SELECT r.contest_id,
       ROUND(COUNT(r.user_id) * 100.0 / (SELECT COUNT(*) FROM Users), 2) AS percentage
FROM Register r
GROUP BY r.contest_id
ORDER BY percentage DESC, r.contest_id ASC;