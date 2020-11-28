import sys
import cv2
print('Hello CV', cv2.__version__)

path = '/Users/seonu/Documents/SoyNet/study/CS/OpenCV_python/ch01/images/'
img = cv2.imread(path + '1.jpg')
# imread() 의 flags 인자의 default는 cv2.IMREAD_COLOR

if img is None:     # 이미지를 못불러왔을 때 예외처리 코드
    print('Image load failed!')
    sys.exit()

# cv2.imwrite('cat_gray.png', img)

cv2.namedWindow('image')        # image라는 window 생성
cv2.imshow('image', img)        # image창에 img 를 띄워줌

while True:
    if cv2.waitKey() == 27:     # esc 키를 입력하면 창 종료 (esc의 ASCII CODE는 27)
    # if cv2.waitKey() == ord('q'):     이 방식도 가능 -> 키보드의 q 입력 시 창 종료
        break                   # 키보드 입력을 기다림

cv2.destroyAllWindows()