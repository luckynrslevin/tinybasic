5 REM "Draw 100 rectangles"
10 T=MILLIS(1)
20 FOR I=1 TO 100
30 FRECT RND(200),RND(200),RND(200),RND(200)
40 COLOR RND(15)
50 NEXT
60 PRINT MILLIS(1)-T
