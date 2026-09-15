# Write your MySQL query statement below




-- select s.student_id , s.student_name , ss.subject_name , count(examinations.student_id) as  attended_exams  from students s cross join  subjects ss on ss.subject_name =  examinations.subject_name group by subject_name;


SELECT s.student_id,
       s.student_name,
       sub.subject_name,
       COUNT(e.subject_name) AS attended_exams
FROM Students s
CROSS JOIN Subjects sub
LEFT JOIN Examinations e
    ON s.student_id = e.student_id
   AND sub.subject_name = e.subject_name
GROUP BY s.student_id,
         s.student_name,
         sub.subject_name
ORDER BY s.student_id,
         sub.subject_name;