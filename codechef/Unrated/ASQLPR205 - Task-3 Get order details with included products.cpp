-- Write the query to retrieve order information along with the products included in each order.
-- Headers expected in output: | OrderID | OrderDate  | FirstName | LastName |  ProductName   | Quantity | UnitPrice |





select o.orderid, o.orderdate , c.firstname, c.lastname , p.productname , oo.quantity, oo.unitprice from Orders o join Customers c on o.customerid = c.customerid 


join products p on p.productid = oo.productid 

join orderdetails oo on o.orderid = oo.orderid

;
