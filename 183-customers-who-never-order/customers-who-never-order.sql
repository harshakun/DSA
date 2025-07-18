/* Write your T-SQL query statement below */
select name as Customers  from customers where id not in (select a.id from Customers a join Orders b on a.id = b.customerId)