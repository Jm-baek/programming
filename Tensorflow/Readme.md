
tf.io.gfile.glob - 주어진 패턴과 일치하는 파일 목록을 반환합니다.  
정렬도 같이 되는 것 같지만 사용할 때마다 확인이 필요하다.  
예시)   
  - len_of_images = len(tf.io.gfile.glob(os.path.join(dataset_path, '*.jpg')))

