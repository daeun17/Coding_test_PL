-- 코드를 입력하세요
SELECT COUNT(USER_ID) AS USERS FROM (
    SELECT USER_ID FROM USER_INFO 
    WHERE AGE IS NULL
)