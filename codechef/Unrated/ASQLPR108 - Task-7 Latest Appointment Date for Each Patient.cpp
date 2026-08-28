



select p.patientid, p.name, a.appointmentdate as LatestAppointment from patients p join appointments a on p.patientid = a.patientid      ; 
