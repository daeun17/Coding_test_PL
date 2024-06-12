-- 코드를 입력하세요
SELECT U.USER_ID, U.NICKNAME,
U.CITY || ' ' || U.STREET_ADDRESS1 || ' ' || U.STREET_ADDRESS2 AS 전체주소,
SUBSTR(U.TLNO,1,3) || '-' || SUBSTR(U.TLNO,4,4) || '-' || SUBSTR(U.TLNO,8) AS 전화번호
FROM USED_GOODS_USER U 
JOIN (
    SELECT WRITER_ID, COUNT(*) 
    FROM USED_GOODS_BOARD 
    GROUP BY WRITER_ID
    HAVING COUNT(*) >= 3
) B
ON U.USER_ID = B.WRITER_ID
ORDER BY USER_ID DESC