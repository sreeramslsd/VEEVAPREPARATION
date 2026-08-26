



--select cuisine , sum (price ) as 'Non_Veg_Price' from Orders where category= 'Non veg' group by Cuisine;




select cuisine , sum(case when category is 'Non veg' then price else 0 END) as 'Non_Veg_Price' from Orders group by Cuisine; 