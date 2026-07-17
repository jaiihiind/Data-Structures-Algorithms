select query_name , ROUND(AVG((rating/position)),2) as quality ,
 ROUND(avg(IF(rating < 3 ,1,0)) * 100,2) AS poor_query_percentage 
from queries
group by query_name