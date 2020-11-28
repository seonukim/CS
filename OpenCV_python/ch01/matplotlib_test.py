import cv2
import matplotlib.pyplot as plt

path = '/Users/seonu/Documents/SoyNet/study/CS/OpenCV_python/ch01/images/'

# 컬러 영상 출력
imgBGR = cv2.imread(path + '1.jpg')
imgRGB = cv2.cvtColor(imgBGR, cv2.COLOR_BGR2RGB)        # opencv는 BGR로 나타내서 RGB로 바꿔줘야함

plt.axis('off')         # 가로세로 눈금
plt.imshow(imgRGB)
plt.show()