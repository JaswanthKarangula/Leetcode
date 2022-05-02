# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below
DELETE from Person as p where p.id not in (select * from (select min(c.id) as id from Person as c group by c.email ) as t)  ;