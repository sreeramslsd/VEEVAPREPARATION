-- Write the query to get the list of all patients who have not paid the bill. 
-- (Use the concept of Subqueries & Set Operations)

-- The output should contain the following fields: 
-- |PatientID | Name |




--select p.patientid , p.name from patients p join Billing b on p.patientid = b.patientid where Status = 'Unpaid';



select patientid , name from patients where patientid in (select patientid from billing where Status = 'Unpaid' );


