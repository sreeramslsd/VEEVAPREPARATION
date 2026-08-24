-- Write the SQL query to create the tables given above (Customers & Orders) with the given constraints like primary key, unique key, foreign key (do not insert data into the table).



create table customers (


customer_id int primary key, 

customer_name text,

city text ,


customer_email text unique


);


create table orders(

order_id int primary key,

customer_id int ,


order_date text,

amount real,

foreign key(customer_id) references Customers(customer_id)



);
