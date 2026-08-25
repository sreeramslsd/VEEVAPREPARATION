with Top_purchase as (

select purchase_id, customer_id, purchase_amt from purchase order by purchase_amt desc limit 3 


)


select * from customer join Top_Purchase on customer.customer_id = top_purchase.customer_id;