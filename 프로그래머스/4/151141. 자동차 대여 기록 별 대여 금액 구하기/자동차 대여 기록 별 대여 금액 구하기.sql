-- 코드를 입력하세요
with dis as(
    SELECT *, CASE WHEN DATEDIFF(END_DATE, START_DATE)+1 >=90 THEN '90일 이상'
    WHEN DATEDIFF(END_DATE, START_DATE)+1 >=30 THEN '30일 이상'
    WHEN DATEDIFF(END_DATE, START_DATE)+1 >=7 THEN '7일 이상'
    ELSE NULL
    END as DUR
    FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY 
), truck as(
    SELECT A.HISTORY_ID, A.CAR_ID, A.START_DATE, A.END_DATE, A.DUR, B.DAILY_FEE FROM dis A JOIN CAR_RENTAL_COMPANY_CAR B ON A.CAR_ID = B.CAR_ID
    WHERE B.CAR_TYPE = '트럭'
), plan as(
    SELECT * FROM CAR_RENTAL_COMPANY_DISCOUNT_PLAN WHERE CAR_TYPE = '트럭'
)

SELECT A.HISTORY_ID, 
CASE WHEN DATEDIFF(A.END_DATE, A.START_DATE)+1 >= 7 THEN FLOOR((DATEDIFF(A.END_DATE, A.START_DATE)+1) * A.DAILY_FEE * (100-B.DISCOUNT_RATE)/100 )
ELSE FLOOR((DATEDIFF(A.END_DATE, A.START_DATE)+1) * A.DAILY_FEE)
END as FEE 
FROM truck A LEFT JOIN plan B ON A.DUR = B.DURATION_TYPE
ORDER BY FEE DESC, 1 DESC;
