import sys
import glob
import cv2

file_path = '/Users/seonu/Documents/SoyNet/study/CS/OpenCV_python/ch01/images'
img_files = glob.glob(file_path + '/*.jpg')


if not img_files:
    print("There are no jpg files in 'images' folder")
    sys.exit()

cv2.namedWindow('image', cv2.WINDOW_NORMAL)
cv2.setWindowProperty('image', cv2.WND_PROP_FULLSCREEN, cv2.WINDOW_FULLSCREEN)


# 무한 루프
cnt = len(img_files)
print("len : ", cnt)
idx = 0

while True:
    img = cv2.imread(img_files[idx])

    if img is None:
        print('Image load failed!')
        break

    cv2.imshow('image', img)
    if cv2.waitKey(1000) == 27:     # ESC
        break
    
    idx += 1
    if idx >= cnt:
        idx = 0

cv2.destroyAllWindows()