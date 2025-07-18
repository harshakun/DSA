/* Write your T-SQL query statement below */
with cte as (
    select *,lead(num) over (order by id) as le , lag(num) over(order by id) as lg from Logs
)
select distinct(num) as ConsecutiveNums  from cte where num= le and num = lg