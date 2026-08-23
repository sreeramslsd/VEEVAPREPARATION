/* write a query with the following conditions
- Destination city end in 'o' AND
- Origin city starts with 'M' 
*/




select * from Flights where Destination like '%o' and origin like 'M%';