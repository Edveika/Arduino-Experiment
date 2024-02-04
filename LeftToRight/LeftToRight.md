# 👟 Left to right and back(relative to pin number)

![leftToRight](https://github.com/Edveika/Arduino-LED/assets/113787144/ad2d536e-819b-46b7-91fe-056b632c3b21)

[Full source code](https://github.com/Edveika/Arduino-LED/blob/main/LeftToRight/LeftToRight.ino)

# 🧠 Main loop logic

```c++
  for (int i = LED_START; i <= LED_END; ++i)
  {
    digitalWrite(i, LOW);
    delay(500);
  }
  for (int i = LED_END; i >= LED_START; --i)
  {
    digitalWrite(i, HIGH);
    delay(500);
  }
```
