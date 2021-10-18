import cv2
import numpy as np

# TODO: change input image name as you want
filename = "1_in.png"

image = cv2.imread(filename, cv2.IMREAD_GRAYSCALE)[:,:]

with open("in.txt", "w") as f:
    h, w = image.shape
    f.write(str(h) + ' ' + str(w) + '\n')
    for i in range(h):
        for j in range(w):
            f.write(str(image[i][j]) + '\n')

