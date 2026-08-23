select customer_name
from Orders
where (address_pincode = 122001 OR address_pincode = 122002)
and order_time < 12.3
and apartment_floor >= 3;