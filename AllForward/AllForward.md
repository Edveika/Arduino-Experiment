# All LEDs forward

![allForward](https://github.com/Edveika/Arduino-LED/assets/113787144/5620ab3c-7404-4aa6-8c57-7809f7fa75db)

[Full source code](https://github.com/Edveika/Arduino-LED/blob/main/AllForward/AllForward.ino)

# Main loop logic

```c++
for (int i = LED_START; i <= LED_END; ++i)
{
  digitalWrite(i, LOW);
  delay(500);
}

turnOffLeds();
```
