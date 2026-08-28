-- Write the query to Get All Patients Including Those Without Appointments (Use the concept of JOINs)

-- The output should contain the following fields: 
-- | Name | AppointmentID | Status |



select p.name , a.appointmentid, a.status from patients p full outer join appointments a on a.patientid = p.patientid  ; 
