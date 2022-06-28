# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below
DELETE p1 from Person p1, Person p2 where p1.Id > p2.Id AND p1.email = p2.email;