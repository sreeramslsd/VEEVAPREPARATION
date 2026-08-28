-- Write the query to fetch all Scheduled Consultations (Use the concept of JOINs)

-- The output should contain the following fields: 
-- | AppointmentID | Patient | Doctor | AppointmentDate |


 
SELECT a.APPOINTMENTID ,  p.NAME AS PATIENT , d.NAME AS DOCTOR ,  a.APPOINTMENTDATE from appointments a join patients p on a.patientid = p.patientid 

join doctors d on a.doctorid=d.doctorid limit 1;
