-- 코드를 입력하세요
SELECT
    F.PRODUCT_ID,
    F.PRODUCT_NAME,
    SUM(O.AMOUNT * F.PRICE) AS TOTAL_SALES
FROM
    FOOD_PRODUCT F
JOIN
    FOOD_ORDER O ON F.PRODUCT_ID = O.PRODUCT_ID
WHERE
    EXTRACT(YEAR FROM O.PRODUCE_DATE) = 2022 AND
    EXTRACT(MONth FROM O.PRODUCE_DATE) = 5
GROUP BY
    F.PRODUCT_ID,
    F.PRODUCT_NAME
ORDER BY
    TOTAL_SALES DESC,
    F.PRODUCT_ID ASC;