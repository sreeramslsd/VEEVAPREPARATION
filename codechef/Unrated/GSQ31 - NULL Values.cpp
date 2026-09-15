/* Write a query which meets the following conditions
- Passenger_id is blank or null
- Order by name
*/



select * from flights where Passenger_id is null order by passenger_name;