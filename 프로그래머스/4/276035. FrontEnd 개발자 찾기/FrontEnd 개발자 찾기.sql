-- 코드를 작성해주세요
with fe as(
    SELECT * FROM SKILLCODES WHERE CATEGORY = 'Front End'
), fee as(
    SELECT A.ID, A.EMAIL, A.FIRST_NAME, A.LAST_NAME FROM DEVELOPERS A , fe B 
    WHERE (A.SKILL_CODE & B.CODE) > 0
    
)

SELECT DISTINCT * FROM fee
    ORDER BY ID




