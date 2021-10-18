import numpy as np
import cv2

file_in = "1_in.png"
file_out = "1_out.png"

src = cv2.imread(file_in, cv2.IMREAD_GRAYSCALE)[:,:]
dst = cv2.equalizeHist(src)

cv2.imwrite(file_out, dst)