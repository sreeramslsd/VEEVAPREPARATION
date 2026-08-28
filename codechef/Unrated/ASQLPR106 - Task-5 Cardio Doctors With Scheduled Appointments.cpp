-- Write the query to Get all Doctors from Cardiology Specialization With Scheduled Appointments 
-- (Use the concept of JOINs)

-- The output should contain the following fields: 
-- | Name |




select name from doctors d join appointments a on d.doctorid = a.doctorid where Status = 'Scheduled';
