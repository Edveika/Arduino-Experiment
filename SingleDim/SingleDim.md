# 🌓 Single LED dim

![singleDim](https://github.com/Edveika/Arduino-LED/assets/113787144/7a3d593d-be29-4a93-b9bf-c3da1f1b9a06)

[Full source code](https://github.com/Edveika/Arduino-LED/blob/main/SingleDim/SingleDim.ino)

# 🧠 Main loop logic

```c++
for (int i = LED_START; i <= LED_END; ++i)
  {
    digitalWrite(i, HIGH);
    delay(500);
    digitalWrite(i, LOW);
    delay(500);
  }
```
