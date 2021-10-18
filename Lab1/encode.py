import cv2
import numpy as np
import argparse

parser = argparse.ArgumentParser(description='picture encoder')
parser.add_argument('--file_path', default='pic/1_in.png', type=str,
                     help='path to the input file')

args = parser.parse_args()
filename = args.file_path

image = cv2.imread(filename, cv2.IMREAD_GRAYSCALE)[:,:]

with open("in.txt", "w") as f:
    h, w = image.shape
    f.write(str(h) + ' ' + str(w) + '\n')
    for i in range(h):
        for j in range(w):
            f.write(str(image[i][j]) + '\n')

