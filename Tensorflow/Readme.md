
## 모델 정의 방법

### 1. Sequemtial API 사용
직관적이고 간결하며 청므 접하는 사용자에게 적합.
<pre><code>
from tensorflow.keras import models, Dense
  model = tf.keras.sequential()
  model.add(Dense(4, activation='relu', input_shape=(4,)
</code></pre>
### 2. Functional API를 이용하는 방법
  - 복잡한 모델을 생성할 때의 한계를 극복할 수 있음.
  - 다중 입력(multi_input)과 다중 출력(multi_ouput) 등 정의 가능.

<pre><code>
from tensorflow.keras.layers import Input, Dense
from tensorflow.keras.layers import Model
inputs = Input(shape=(5, ))
x = Dense(8, activation='relu')(inputs)
x = Dense(4, activation='relu')(x)
x = Dense(1, activation='relu')(x)
model = model(inputs, x)
</code></pre>

### 3. Model subclassing API를 이용하는 방법
사용자가 가장 자유롭게 모델을 구축할 수 있는 방법이다.

<pre><code>
class custom(tf.keras.Model):
  def __init__(self):
      super(custom, self).__init__()
      self.block_1 = layers.Dense(32, activation='relu')
      self.block_2 = layers.Dense(16, activation='relu')
     
  def call(self, inputs):
    x = self.block_1(input)
    return self.block_2(x)
 </code></pre>
------------------------------------- 
Functional API와 Model subclass API 작성 방법에 대해 작성하며 가끔 tensorflow 유용한 메서드를 적어놓을 예정이다.

-------------------------------------
tf.io.gfile.glob - 주어진 패턴과 일치하는 파일 목록을 반환합니다.  

정렬도 같이 되는 것 같지만 사용할 때마다 확인이 필요하다.  
예시)   
  - len_of_images = len(tf.io.gfile.glob(os.path.join(dataset_path, '*.jpg')))


tf.keras.utils.plot_model - 모델 결과를 도렬준다,


https://www.tensorflow.org/guide/keras/customizing_what_happens_in_fit?hl=ko
