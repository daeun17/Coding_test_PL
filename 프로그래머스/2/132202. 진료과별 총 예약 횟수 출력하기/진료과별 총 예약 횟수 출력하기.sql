SELECT A.MCDP_CD "진료과 코드",
    COUNT(*) "5월예약건수"
FROM APPOINTMENT A
WHERE A.APNT_YMD BETWEEN TO_DATE('2022-05-01','YYYY-MM-DD') AND TO_DATE('2022-05-31','YYYY-MM-DD')
GROUP BY A.MCDP_CD
ORDER BY "5월예약건수" , "진료과 코드"