# Write your MySQL query statement below



SELECT u.user_id,
       ROUND(
           COALESCE(
               SUM(CASE WHEN c.action = 'confirmed' THEN 1 ELSE 0 END)
               / NULLIF(COUNT(c.user_id), 0),
               0
           ),
           2
       ) AS confirmation_rate
FROM Signups u
LEFT JOIN Confirmations c
    ON u.user_id = c.user_id
GROUP BY u.user_id;