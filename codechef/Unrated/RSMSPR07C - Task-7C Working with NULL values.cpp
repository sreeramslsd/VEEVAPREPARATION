/* Update your query here*/

update orders set remarks_if_any = NULL WHERE remarks_if_any='No Remarks';

select order_id, remarks_if_any from orders where remarks_if_any is NULL;
