# 🔙 All LEDs backward

![allBackward](https://github.com/Edveika/Arduino-LED/assets/113787144/c4f2e937-6d2b-459c-a4df-4d643a27944a)

[Full source code](https://github.com/Edveika/Arduino-LED/blob/main/AllBackward/AllBackward.ino)

# Main loop logic

```c++
for (int i = LED_END; i >= LED_START; --i)
{
  digitalWrite(i, LOW);
  delay(500);
}

turnOffLeds();
```
