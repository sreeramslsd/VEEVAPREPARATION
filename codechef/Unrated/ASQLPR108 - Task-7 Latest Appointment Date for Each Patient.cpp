SELECT PatientID, Name, 
       (SELECT MAX(AppointmentDate) FROM Appointments a WHERE a.PatientID = p.PatientID) AS LatestAppointment 
FROM Patients p;
