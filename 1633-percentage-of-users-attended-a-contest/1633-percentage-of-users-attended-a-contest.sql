select b.contest_id , round(count(distinct b.user_id)*100 /(SELECT COUNT(*) FROM Users),2)  as percentage
from users a inner join register b
on a.user_id = b.user_id
group by b.contest_id
order by percentage desc ,b.contest_id ASC;