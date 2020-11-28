import sys
import cv2
print('Hello CV', cv2.__version__)

img = cv2.imread('cat.bmp')
# imread() 의 flags 인자의 default는 cv2.IMREAD_COLOR

if img is None:     # 이미지를 못불러왔을 때 예외처리 코드
    print('Image load failed!')
    sys.exit()

cv2.namedWindow('image')        # image라는 window 생성
cv2.imshow('image', img)        # image창에 img 를 띄워줌
cv2.waitKey()                   # 키보드 입력을 기다림
cv2.destroyAllWindows()         # 창 닫기