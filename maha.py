import cv2


image = cv2.imread('input_image.jpg')


if image is not None:
    
    cv2.imshow('Image Viewer', image)

     
    cv2.waitKey(0)


    cv2.destroyAllWindows()

    
    cv2.imwrite('output_image.jpg', image)

    print("Image processing complete. Saved as 'output_image.jpg'")
else:
    print("Error: Image could not be loaded. Check the file path.")
