/* Write a query which meets the following conditions
- Passenger_id is blank or null
- Order by name
*/




select * from Flights where Passenger_id is Null order by Passenger_name;