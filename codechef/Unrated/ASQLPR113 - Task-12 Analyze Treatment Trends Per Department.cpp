SELECT 
    CASE 
        WHEN d.Specialization = 'Cardiology' THEN 'Cardiology Department'
        WHEN d.Specialization = 'Neurology' THEN 'Neurology Department'
        ELSE 'General Department'
    END AS Department,
    d.Name AS Doctor, 
    COUNT(t.TreatmentID) AS TotalTreatments,
    RANK() OVER (PARTITION BY 
        CASE 
            WHEN d.Specialization = 'Cardiology' THEN 'Cardiology Department'
            WHEN d.Specialization = 'Neurology' THEN 'Neurology Department'
            ELSE 'General Department'
        END 
        ORDER BY COUNT(t.TreatmentID) DESC) AS RankWithinDepartment
FROM Doctors d
LEFT JOIN Treatments t ON d.DoctorID = t.DoctorID
GROUP BY d.DoctorID, d.Name, d.Specialization
ORDER BY Department, RankWithinDepartment;
