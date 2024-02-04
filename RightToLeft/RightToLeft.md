# ⚡ Right to left and back(relative to pin number)

![rightToLeft](https://github.com/Edveika/Arduino-LED/assets/113787144/270fbd98-7ad1-499b-adb4-22c6e3f12eac)

[Full source code](https://github.com/Edveika/Arduino-LED/blob/main/RightToLeft/RightToLeft.ino)

# 🧠 Main loop logic

```c++
  for (int i = LED_END; i >= LED_START; --i)
  {
    digitalWrite(i, LOW);
    delay(500);
  }

  for (int i = LED_START; i <= LED_END; ++i)
  {
    digitalWrite(i, HIGH);
    delay(500);
  }
```
