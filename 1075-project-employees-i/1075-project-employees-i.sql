select a.project_id , ROUND(AVG(b.experience_years),2)   as average_years
from project a  INNER JOIN Employee b
on a.employee_id  = b.employee_id 
group by a.project_id