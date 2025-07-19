/* Write your T-SQL query statement below */
select b.name as Department , a.name as Employee , a.Salary  as Salary 
from (select *, rank() over(partition by departmentId  order by salary desc) as rk  from employee) a
join Department b on a.departmentId = b.id where a.rk =1