/* Write your T-SQL query statement below */
select distinct(email) from Person group by email having  count(*)>1