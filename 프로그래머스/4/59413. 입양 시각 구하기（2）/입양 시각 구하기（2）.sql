-- 코드를 입력하세요
with recursive time as (
    SELECT 0 as hour
    union all
    SELECT hour+1 from time where hour<23
)

# SELECT * FROM time;

SELECT A.hour as HOUR, COUNT(B.ANIMAL_ID) as COUNT 
    FROM time A left JOIN ANIMAL_OUTS B 
    on HOUR(B.DATETIME) = A.hour
    GROUP BY 1
    ORDER BY 1;
    

# SELECT r.hour as HOUR,COUNT(ANIMAL_ID)as COUNT
# FROM ANIMAL_OUTS as o right join time as r
# on HOUR(o.DATETIME) = r.hour
# GROUP BY 1
# ORDER BY 1