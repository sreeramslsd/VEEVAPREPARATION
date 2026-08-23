/* **Debug this query** to output the minimum and maximum value of payout, round to 2 decimal places. */


select min(round(Payout,2)) as 'min_pay',
    max(round(Payout,2)) as 'max_pay'
from employee limit 1;

