/* Write your T-SQL query statement below */
select b.name from (
select distinct(managerId ) as m from Employee group by managerId  having count(managerId )>4) a join employee b on a.m=b.id