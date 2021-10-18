import math
import cv2
import numpy as np

# TODO: change output image name as you want
filename = "save.png"

with open('out.txt', 'r') as f:
    a = f.read().split('\n')
    hw = a[0].split(' ')
    h, w = int(hw[0]), int(hw[1])

    ex = np.zeros((h, w))

    b = a[1].split(' ')
    tt = 0
    for i in range(h):
        for j in range(w):
            ex[i][j] = int(b[tt])
            tt += 1

cv2.imwrite(filename, ex)
