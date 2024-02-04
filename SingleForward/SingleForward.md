# 🚨 Single LED forward

![singleForward](https://github.com/Edveika/Arduino-LED/assets/113787144/6b23f023-a826-421f-b060-6045068c8603)

[Full source code](https://github.com/Edveika/Arduino-LED/blob/main/SingleForward/SingleForward.ino)

# 🧠 Main loop logic

```c++
  for (int i = LED_START; i <= LED_END; ++i)
  {
    digitalWrite(i, LOW);
    delay(500);
    digitalWrite(i, HIGH);
    delay(500);
  }
```
