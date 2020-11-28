import sys
import cv2
print('Hello CV', cv2.__version__)

img = cv2.imread('cat.bmp')

if img is None:
    print('Image load failed!')
    sys.exit()

cv2.namedWindow('image')        # image라는 window 생성
cv2.imshow('image', img)        # image창에 img 를 띄워줌
cv2.waitKey()                   # 키보드 입력을 기다림
cv2.destroyAllWindows()         # 창 닫기