CREATE FUNCTION getNthHighestSalary(@N INT) RETURNS INT AS
BEGIN
    RETURN (
        /* Write your T-SQL query statement below. */
          select distinct(a.salary) from 
      (select *, dense_rank() over(order by salary desc) as rk
      from Employee )a where a.rk = @N


    );
END