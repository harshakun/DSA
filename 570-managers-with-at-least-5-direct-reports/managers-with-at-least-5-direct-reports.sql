select a.name as name from employee a join (
select managerId from employee group by managerId having count(*)>=5) b on a.id = b.managerId