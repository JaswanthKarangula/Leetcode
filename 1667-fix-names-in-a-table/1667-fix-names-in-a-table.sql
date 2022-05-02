# Write your MySQL query statement below
# SELECT user_id, CONCAT(UPPER(LEFT(name,1)),LOWER(RIGHT(name,LENGTH(name)-1))) AS name
# FROM Users
# ORDER BY user_id ASC;

SELECT Users.user_id , CONCAT(UPPER(SUBSTR(Users.name,1,1)),LOWER(SUBSTR(Users.name,2))) AS name 
FROM Users
ORDER BY
Users.user_id ASC