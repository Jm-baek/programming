
tf.io.gfile.glob - 주어진 패턴과 일치하는 파일 목록을 반환합니다.  
정렬도 같이 되는 것 같지만 사용할 때마다 확인이 필요하다.  
예시)   
  - len_of_images = len(tf.io.gfile.glob(os.path.join(dataset_path, '*.jpg')))




https://www.tensorflow.org/guide/keras/customizing_what_happens_in_fit?hl=ko


class CustomModel(keras.Model):
    def train_step(self, data):
        # Unpack the data. Its structure depends on your model and
        # on what you pass to `fit()`.
        x, y = data

        with tf.GradientTape() as tape:
            y_pred = self(x, training=True)  # Forward pass
            # Compute the loss value
            # (the loss function is configured in `compile()`)
            loss = self.compiled_loss(y, y_pred, regularization_losses=self.losses)

        # Compute gradients
        trainable_vars = self.trainable_variables
        gradients = tape.gradient(loss, trainable_vars)
        # Update weights
        self.optimizer.apply_gradients(zip(gradients, trainable_vars))
        # Update metrics (includes the metric that tracks the loss)
        self.compiled_metrics.update_state(y, y_pred)
        # Return a dict mapping metric names to current value
        return {m.name: m.result() for m in self.metrics}
