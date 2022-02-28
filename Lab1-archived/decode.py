import math
import cv2
import numpy as np
import argparse

parser = argparse.ArgumentParser(description='picture decoder')
parser.add_argument('--file_path', default='out.png', type=str,
                     help='path to the output file')

args = parser.parse_args()
filename = args.file_path

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
