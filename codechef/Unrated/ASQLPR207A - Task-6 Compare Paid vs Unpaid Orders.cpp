-- Write the query to compare orders that have associated payments with orders that do not.
-- Headers expected in output: | OrderID | OrderDate  | PaymentID | PaymentDate | Amount |


select o.orderid, o.orderdate, p.paymentid , p.paymentdate, p.amount from orders o join payments p on o.orderid = p.orderid ; 


