-- 코드를 입력하세요
# with usr as(
#     SELECT USER_ID FROM USER_INFO WHERE JOINED LIKE '2021%'
# ), os as(
#     SELECT * FROM ONLINE_SALE WHERE USER_ID IN (SELECT * FROM usr) GROUP BY USER_ID
# ), final as(
#     SELECT YEAR(SALES_DATE)YEAR,MONTH(SALES_DATE)MONTH, COUNT(USER_ID)PUCHASED_USERS  FROM os
#     GROUP BY 1,2
#     ORDER BY 1,2
# )


# SELECT YEAR,MONTH, PUCHASED_USERS, ROUND(PUCHASED_USERS/(SELECT COUNT(*) FROM usr),1)PUCHASED_RATIO FROM final

with usr as(
    SELECT USER_ID FROM USER_INFO WHERE JOINED LIKE '2021%'
)

SELECT YEAR(A.SALES_DATE)YEAR,MONTH(A.SALES_DATE)MONTH, 
COUNT(DISTINCT A.USER_ID)PUCHASED_USERS, ROUND(COUNT(DISTINCT A.USER_ID)/(SELECT COUNT(*) FROM usr),1)PUCHASED_RATIO

FROM ONLINE_SALE A JOIN usr B USING(USER_ID)
GROUP BY 1,2
ORDER BY 1,2





# SELECT YEAR(A.SALES_DATE)YEAR,MONTH(A.SALES_DATE)MONTH, COUNT(DISTINCT A.USER_ID)PUCHASED_USERS FROM ONLINE_SALE A JOIN USER_INFO B USING(USER_ID)
#     WHERE B.JOINED LIKE '2021%'
#     GROUP BY YEAR(A.SALES_DATE), MONTH(A.SALES_DATE)
#     ORDER BY 1,2