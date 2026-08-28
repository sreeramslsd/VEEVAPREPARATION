-- Write the query to count the patients with specific conditions.
-- (Use the concept of Aggregations & Analytical Functions)

-- The output should contain the following fields: 
-- |Diagnosis  | PatientCount





--SELECT DIAGNOSIS , COUNT(PATIENTID) AS PATIENTCOUNT FROM TREATMENTS GROUP BY DIAGNOSIS;



SELECT DISTINCT (DIAGNOSIS), COUNT(PATIENTID) OVER (PARTITION BY DIAGNOSIS) AS PATIENTCOUNT FROM TREATMENTS;
