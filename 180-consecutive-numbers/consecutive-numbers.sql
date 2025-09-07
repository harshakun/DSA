# Write your MySQL query statement below

select distinct(a.num) as ConsecutiveNums from 
(select id, num, lag(num,1,0) over(order by id) as prev ,
lead (num,1,0) over (order by id ) as next from Logs) a
where a.num = a.prev and a.num = a.next