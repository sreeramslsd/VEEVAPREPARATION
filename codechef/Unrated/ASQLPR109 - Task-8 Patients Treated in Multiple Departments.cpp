-- Complete the query to find patients treated in multiple departments (specializations)
-- (Use the concept of JOINS, Subqueries & Set Operations)

-- The output should contain the following fields: 
-- |PatientID | Name | Specialization

SELECT t.PatientID, p.Name, d.Specialization 
FROM Treatments t  
JOIN patients p ON t.patientid = p.patientid
JOIN doctors d ON t.doctorid = d.doctorid  
WHERE t.PatientID IN (  
    SELECT patientid  
    FROM Treatments t2  
    JOIN Doctors d2 ON t2.doctorid = d2.doctorid 
    GROUP BY t2.patientid 
    HAVING COUNT(DISTINCT d2.doctorid) > 1  
)  
ORDER BY t.PatientID , d.specialization ;

