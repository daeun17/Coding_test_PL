-- 코드를 입력하세요
SELECT 
    NAME,
    DATETIME
FROM
    (SELECT 
        I.NAME, 
        I.DATETIME
    FROM 
        ANIMAL_INS I
    WHERE 
        NOT EXISTS (
            SELECT 1
            FROM ANIMAL_OUTS O
            WHERE O.ANIMAL_ID = I.ANIMAL_ID
        )
    ORDER BY 
        I.DATETIME)
WHERE ROWNUM <= 3;