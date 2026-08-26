






select 

    case 
    
    when price > 18 then 'High' 
    
    when price between 10 and 18 then 'Medium' 
    
    when price < 10 then 'Low' 
    
    else 'NA'
    
    end as Pay_Category ,
    
    count(*) as dish_count from Orders group by Pay_Category ; 
